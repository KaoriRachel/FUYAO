//
// Created by tank on 3/15/23.
//

#include "func_worker_interface.h"

#include <string.h>
#include <stdio.h>
#include <absl/container/flat_hash_map.h>

#include <utility>

#include "utils.h"

// include in Lumine/lib/bash
#include "base/thread.h"
#include "ThreadPool.h"

#include "utils_for_test.h"

using json = nlohmann::json;

struct worker_context {
    void *caller_context;
    faas_invoke_func_fn_t invoke_func_fn;
    faas_append_output_fn_t append_output_fn;
    ThreadPool *thread_pool;
};

struct Job {
    struct worker_context *context;
    uint64_t elapsed_time;
    std::string func_name;
    bool succeed;

    Job(struct worker_context *context, uint64_t elapsed_time, std::string func_name, bool succeed) :
            context(context), elapsed_time(0), func_name(std::move(func_name)), succeed(false) {
    }
};

absl::flat_hash_map<std::string, std::shared_ptr<utils_for_test::Socket>> socket_map_;

int faas_init() {

#ifdef __ENABLE_ACROSS
    // inter-host
    {
        for(int i=0; i<80;i++){
            auto downstream_fn = fmt::format("exp11RunAudit{}", i + 1);
            auto socket = std::make_shared<utils_for_test::Socket>("192.168.1.129", 8084);

            if(socket->conn() < 0){
                perror("Failed to connect");
                return -1;
            }
            socket_map_[downstream_fn] = socket;
        }

    }
#endif

    return 0;
}

int faas_create_func_worker(void *caller_context,
                            faas_invoke_func_fn_t invoke_func_fn,
                            faas_append_output_fn_t append_output_fn,
                            void **worker_handle) {
    auto context = new worker_context;

    context->caller_context = caller_context;
    context->invoke_func_fn = invoke_func_fn;
    context->append_output_fn = append_output_fn;
    context->thread_pool = new ThreadPool(80);

    *worker_handle = context;
    return 0;
}

int invoke(void *arg) {
    auto job = reinterpret_cast<struct Job *>(arg);
    auto context = reinterpret_cast<struct worker_context *>(job->context);

    const char *fn_e_output;
    size_t fn_e_output_length;
    // invoke fn_b via fast internal function call
    auto start_time = Finra::get_timestamp_us();
    char payload[256] = {"2\0"};

    int ret = 0;

#ifndef __ENABLE_ACROSS
    // intra-host
    ret = context->invoke_func_fn(context->caller_context,
                                      job->func_name.c_str(),
                                      payload,
                                      strlen(payload),
                                      &fn_e_output, &fn_e_output_length, Finra::ChooseMessagePassingMethod());
#elif
// inter-host
    {
        char buf[1024];
        auto socket = socket_map_[job->func_name];
        std::string invoke_path = "/function/" + job->func_name;
        socket->issue_http_request("POST", invoke_path.c_str(), payload, strlen(payload));
        socket->recv_response(buf, 1024);

    }
#endif

    auto end_time = Finra::get_timestamp_us();

    job->elapsed_time = end_time - start_time;
    job->succeed = (ret != -1);

    return 0;
}

int faas_func_call(void *worker_handle,
                   const char *input,
                   size_t input_length) {

//    auto fn_invoke = absl::bind_front(invoke);
//    std::vector<std::shared_ptr<faas::base::Thread>> threads;
    std::vector<std::shared_ptr<Job>> jobs;

    // parse request
    json input_json = json::parse(input);
    if (!input_json.contains("req_id") ||
        !input_json.contains("fanout_num")) {
        fprintf(stderr, "start_for_finra: invalid input");
        return -1;
    }

    auto req_id = input_json.at("req_id").get<long long>();
    auto fanout_num = input_json.at("fanout_num").get<long long>();

    auto start_time = Finra::get_timestamp_us();

    auto context = (worker_context *) worker_handle;
    std::vector<std::future<int>> results;
    for (int i = 0; i < fanout_num; i++) {
        auto job = std::make_shared<Job>(context, 0, fmt::format("exp11RunAudit{}", i + 1), false);
        jobs.push_back(job);

        results.emplace_back(context->thread_pool->enqueue(invoke, (void *)job.get()));
    }

    for(auto &&result : results){
        result.get();
    }

    for (auto &job: jobs) {
        if (!job->succeed) {
            return -1;
        }
    }

    auto end_time = Finra::get_timestamp_us();

    std::cout << fmt::format("req_id = {}, token = {} us", req_id, end_time - start_time) << std::endl;

    char output[] = "All jobs are completed!\n";
    context->append_output_fn(context->caller_context, output, strlen(output));

    return 0;
}

int faas_destroy_func_worker(void *worker_handle) {
    auto context = reinterpret_cast<struct worker_context *>(worker_handle);
    delete context;
    return 0;
}