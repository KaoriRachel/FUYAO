//
// Created by tank on 3/17/23.
//

#include "func_worker_interface.h"
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

    auto data_after_label = reinterpret_cast<const float *>(input);

    int size = (int) data_after_label[0];
    auto tensor_obj = data_after_label + 1;

    auto tensor_ptr = const_cast<float *>(tensor_obj);
    int arg_size = 1;
    // just looks like pheromone
    for (int i = 0; i < size; i++) {
        float mean = 0.0;
        for (int j = 0; j < arg_size; j++) {
            mean += tensor_ptr[i];
        }
//        tensor_ptr[i] = mean / arg_size;
    }

    long end_time = exp07_utils::get_timestamp_us();
    context->append_output_fn(context->caller_context, reinterpret_cast<const char *>(&end_time), sizeof(end_time));

    return 0;
}

int faas_destroy_func_worker(void *worker_handle) {
    auto context = reinterpret_cast<struct worker_context *>(worker_handle);
    delete context;
    return 0;
}