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

    // parse input
    json input_json = json::parse(input);
    if (!input_json.contains("req_id") ||
        !input_json.contains("title") ||
        !input_json.contains("movie_id")) {
        fprintf(stderr, "RegisterMovieId: invalid input");
        return -1;
    }

    // invoke Pheromone
    auto manager_ip = "127.0.0.1";
    PheromoneClient client(manager_ip);

    std::string app_name("exp02_register");

    std::vector<std::string> args;
    args.push_back(input_json.dump());

    auto start_time = exp09_utils::get_timestamp_us();
    client.call_app(app_name, "exp02_register_movieid_1", args);

    char output[] = "Register Movie data, succeed!\n";
    // send the output back to the engine
    context->append_output_fn(context->caller_context, output, strlen(output));

    return 0;
}

int faas_destroy_func_worker(void *worker_handle) {
    auto context = reinterpret_cast<struct worker_context *>(worker_handle);
    delete context;
    return 0;
}