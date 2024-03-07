//
// Created by tank on 3/15/23.
//

#include "func_worker_interface.h"

#include <string.h>
#include <stdio.h>

#include <utility>

#include "utils.h"

// include in Lumine/lib/bash
#include "base/thread.h"

struct worker_context {
    void *caller_context;
    faas_invoke_func_fn_t invoke_func_fn;
    faas_append_output_fn_t append_output_fn;
};

struct Job {
    struct worker_context *context;
    uint64_t elapsed_time;
    std::string func_name;
    bool succeed;

    Job(struct worker_context *context, uint64_t elapsed_time, std::string func_name, bool succeed) :
            context(context), elapsed_time(0), func_name(std::move(func_name)), succeed(false) {}
};

int faas_init() {
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

    *worker_handle = context;
    return 0;
}

void invoke(void *arg) {
    auto job = reinterpret_cast<struct Job *>(arg);
    auto context = reinterpret_cast<struct worker_context *>(job->context);

    const char *fn_e_output;
    size_t fn_e_output_length;
    // invoke fn_b via fast internal function call
    auto start_time = utils::get_timestamp_us();

    char payload[256] = {"hello world!"};

    int ret = context->invoke_func_fn(context->caller_context,
                                      job->func_name.c_str(),
                                      payload,
                                      strlen(payload),
                                      &fn_e_output, &fn_e_output_length, PassingMethod::DRC_OVER_IPC_POLLING);
    auto end_time = utils::get_timestamp_us();

    job->elapsed_time = end_time - start_time;
    job->succeed = (ret != -1);
}

int faas_func_call(void *worker_handle,
                   const char *input,
                   size_t input_length) {

    auto fn_invoke = absl::bind_front(invoke);
    std::vector<std::shared_ptr<faas::base::Thread>> threads;
    std::vector<std::shared_ptr<Job>> jobs;

    // parse request
    std::string num_str(input, input_length);

    int num;
    try {
        num = std::stoi(num_str);
    } catch (std::exception &err) {
        LOG(ERROR) << "invalid input!";
        return -1;
    }

    for (int i = 0; i < num; i++) {
        auto thread = std::make_shared<faas::base::Thread>(fmt::format("Thread-{}", i), fn_invoke);
        auto job = std::make_shared<Job>((worker_context *) worker_handle, 0,
                                         fmt::format("exp08Downstream{}", i + 1), false);
        thread->Start((void *) job.get());

        jobs.push_back(job);
        threads.push_back(thread);
    }

    for (auto &thread: threads) {
        thread->Join();
    }

    for (auto &job: jobs) {
        if (!job->succeed) {
            return -1;
        }
    }

    char output[] = "All jobs are completed!\n";
    auto context = (worker_context *) worker_handle;
    context->append_output_fn(context->caller_context, output, strlen(output));

    return 0;
}

int faas_destroy_func_worker(void *worker_handle) {
    auto context = reinterpret_cast<struct worker_context *>(worker_handle);
    delete context;
    return 0;
}