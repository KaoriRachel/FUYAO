//
// Created by tank on 3/15/23.
//

#include "func_worker_interface.h"

#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "fmt/format.h"
#include "base/logging.h"
#include "utils.h"

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

    auto ent_time = exp09_utils::get_timestamp_us();

    std::string input_str(input, input_length);

    LOG(INFO) << fmt::format("req_id = {}, end_time = {}", input_str, ent_time);

//    char output[] = "succeed!\n";
//    // send the output back to the engine
//    context->append_output_fn(context->caller_context, output, strlen(output));

    return 0;
}

int faas_destroy_func_worker(void *worker_handle) {
    auto context = reinterpret_cast<struct worker_context *>(worker_handle);
    delete context;
    return 0;
}