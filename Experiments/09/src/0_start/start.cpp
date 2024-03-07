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

using json = nlohmann::json;

static pid_t __gettid() {
    return syscall(SYS_gettid);
}

auto manager_ip = "127.0.0.1";
auto thread_id = static_cast<int>(__gettid());
auto thread_num = 128;

struct worker_context {
    void *caller_context;
    faas_invoke_func_fn_t invoke_func_fn;
    faas_append_output_fn_t append_output_fn;
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

int faas_func_call(void *worker_handle,
                   const char *input,
                   size_t input_length) {
    auto context = reinterpret_cast<struct worker_context *>(worker_handle);

    json input_json = json::parse(input);
    if (!input_json.contains("req_id") ||
        !input_json.contains("title") ||
        !input_json.contains("rating") ||
        !input_json.contains("text")) {
        fprintf(stderr, "RegisterMovieId: invalid input");
        return -1;
    }

    auto req_id = input_json.at("req_id").get<long long>();
    auto title = input_json.at("title").get<std::string>();
    auto rating = input_json.at("rating").get<long long>();
    auto text = input_json.at("text").get<std::string>();

    // invoke Pheromone
    std::string app_name("exp02");

    std::vector<std::string> args;
    args.push_back(std::to_string(req_id));
    args.push_back(title);
    args.push_back(std::to_string(rating));
    args.push_back(text);

    auto start_time = exp09_utils::get_timestamp_us();
    PheromoneClient client(manager_ip, thread_id % thread_num);
    client.call_app(app_name, "exp02_web_server_0", args);

    char output[] = "invoke MediaService running on Pheromone, succeed!\n";
    // send the output back to the engine
    context->append_output_fn(context->caller_context, output, strlen(output));

    LOG(INFO) << fmt::format("req_id = {}, start_time = {}", req_id, start_time);

    return 0;
}

int faas_destroy_func_worker(void *worker_handle) {
    auto context = reinterpret_cast<struct worker_context *>(worker_handle);
    delete context;
    return 0;
}