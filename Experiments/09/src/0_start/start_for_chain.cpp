//
// Created by tank on 3/15/23.
//

#include "func_worker_interface.h"
#include "pheromone_client.h"

#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <nlohmann/json.hpp>
#include "utils.h"
#include "base/logging.h"

#include <absl/container/flat_hash_map.h>

using json = nlohmann::json;

static pid_t __gettid() {
    return syscall(SYS_gettid);
}

auto manager_ip = "192.168.1.129";
auto thread_id = static_cast<int>(__gettid());
auto thread_num = 128;

struct worker_context {
    void *caller_context;
    faas_invoke_func_fn_t invoke_func_fn;
    faas_append_output_fn_t append_output_fn;
};


PheromoneClient client(manager_ip, thread_id % thread_num);

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

int faas_func_call(void *worker_handle,
                   const char *input,
                   size_t input_length) {
    auto context = reinterpret_cast<struct worker_context *>(worker_handle);


//    LOG(ERROR) << input;

    json input_json = json::parse(input);
    if (!input_json.contains("chain_len") ||
        !input_json.contains("payload_size")) {
        fprintf(stderr, "start_for_chain: invalid input");
        return -1;
    }

//    auto req_id = input_json.at("req_id").get<long long>();
    auto chain_len = input_json.at("chain_len").get<long long>();
    auto payload_size = input_json.at("payload_size").get<std::string>();

    // invoke Pheromone
    std::string app_name("exp00");

    std::vector<std::string> args;
    args.push_back(std::to_string(chain_len));
    args.push_back(payload_size);

//    LOG(ERROR) << chain_len << ", " << payload_size;

//    auto start_time = exp09_utils::get_timestamp_us();
    // potential error

    client.call_app(app_name, "exp00_front", args);

//    char output[] = "invoke Finra running on Pheromone, succeed!\n";
    // send the output back to the engine
//    context->append_output_fn(context->caller_context, output, strlen(output));

//    LOG(INFO) << fmt::format("req_id = {}, start_time = {}", req_id, start_time);

    return 0;
}

int faas_destroy_func_worker(void *worker_handle) {
    auto context = reinterpret_cast<struct worker_context *>(worker_handle);
    delete context;
    return 0;
}