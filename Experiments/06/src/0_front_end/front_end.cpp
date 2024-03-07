//
// Created by tank on 3/16/23.
//
#include "func_worker_interface.h"

#include <string>
#include <stdio.h>

#include "utils.h"
#include "base/logging.h"

#include "utils_for_test.h"

struct worker_context {
    void *caller_context;
    faas_invoke_func_fn_t invoke_func_fn;
    faas_append_output_fn_t append_output_fn;
};

utils_for_test::Socket *socket_;

int faas_init() {
    socket_ = new utils_for_test::Socket("192.168.1.126", 8084);

    if(socket_->conn() < 0){
        perror("Failed to connect");
        return -1;
    }

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

    const char *fn_e_output;
    size_t fn_e_output_length;

    int chain_length;
    long will_generate_payload_size;

    // step1: parse input, like  "4 16B"
    bool error = false;
    std::string val(input, input_length);
    auto position = val.find(' ');
    if (position == std::string::npos || position == 0) {
        error = true;
    } else {
        std::string num_str(val, 0, position);
        std::string payload_size_str(val, position + 1);

        // parse num
        try {
            chain_length = std::stoi(num_str);
        } catch (std::exception &e) {
            error = true;
        }

        // parse payload size
        will_generate_payload_size = utils::parse_payload_size(payload_size_str.c_str());
        if (will_generate_payload_size == -1) {
            error = true;
        }
    }

    if (error) {
        LOG(ERROR) << "parse request failed!";
        return -1;
    }

    // step2: generate payload
    void *generate_payload;

    // reserve the space for storing chain length
    will_generate_payload_size = will_generate_payload_size < sizeof(int) ? sizeof(int) : will_generate_payload_size;

    int res = posix_memalign(&generate_payload, 4096, will_generate_payload_size);
    if (generate_payload == nullptr || res != 0) {
        LOG(ERROR) << "generate payload failed!";
        return -1;
    }

    // set chain length
    *(int *) (generate_payload) = chain_length;

    // step 3: invoke downstream via interface
    auto start_time = utils::get_timestamp_us();

//    int ret = context->invoke_func_fn(context->caller_context,
//                                      "exp06Backend",
//                                      reinterpret_cast<char *>(generate_payload),
//                                      will_generate_payload_size,
//                                      &fn_e_output, &fn_e_output_length, utils::ChooseMessagePassingMethod());

// for nightcore intra
    int ret = 0;
    {
        char response[1024] = {0};

        std::string invoke_path = "/function/exp06Backend";
        socket_->issue_http_request("POST", invoke_path.c_str(), generate_payload, will_generate_payload_size);
        auto nrecved = socket_->recv_response(response, 1024);

        auto http_parser = new utils_for_test::HttpParser(response, nrecved);
        auto http_context = http_parser->extract_payload();

        fn_e_output = http_context;
        fn_e_output_length = strlen(http_context);

    }

    long end_time;
    try {
        end_time = std::stol(std::string(fn_e_output, fn_e_output_length));
    } catch (std::exception &e) {
        LOG(ERROR) << "bad response!";
        return -1;
    }

    if (ret != 0) {
        return -1;
    }
    char fn_b_output[60];
    sprintf(fn_b_output, "invoke a function chain of length %d takes %ld\n", chain_length, end_time - start_time);

    // send the output back to the engine
    context->append_output_fn(context->caller_context, fn_b_output, strlen(fn_b_output));

    free(generate_payload);
    return 0;
}

int faas_destroy_func_worker(void *worker_handle) {
    auto context = reinterpret_cast<struct worker_context *>(worker_handle);
    delete context;
    return 0;
}