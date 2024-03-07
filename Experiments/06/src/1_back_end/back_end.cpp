//
// Created by tank on 3/16/23.
//
#include "func_worker_interface.h"

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

    const char *output;
    size_t output_length;

    // step1: parse request
    if (input_length < sizeof(int)) {
        LOG(ERROR) << "bad input length!";
        return -1;
    }

    int chain_length = *(int *) input;
    if (chain_length < 1 || chain_length > 128) {
        LOG(ERROR) << "bad chain length!";
        return -1;
    }

    if (chain_length == 1) {
        auto end_time = utils::get_timestamp_us();
        std::string res = std::to_string(end_time);
        context->append_output_fn(context->caller_context, res.c_str(), res.length());
        return 0;
    }

    // step2: prepare payload
    char *payload = const_cast<char *>(input);

    auto chain_length_ptr = (int *) payload;
    (*chain_length_ptr)--;

    // step3: invoke next function via interface
//    int ret = context->invoke_func_fn(context->caller_context,
//                                      "exp06Backend",
//                                      payload,
//                                      input_length,
//                                      &output, &output_length, utils::ChooseMessagePassingMethod());

    // for nightcore intra
    int ret = 0;
    {
        char response[1024] = {0};

        std::string invoke_path = "/function/exp06Backend";
        socket_->issue_http_request("POST", invoke_path.c_str(), payload, input_length);
        auto nrecved = socket_->recv_response(response, 1024);

        auto http_parser = new utils_for_test::HttpParser(response, nrecved);
        auto http_context = http_parser->extract_payload();

        output = http_context;
        output_length = strlen(http_context);

    }


    if (ret != 0) {
        return -1;
    }

    context->append_output_fn(context->caller_context, output, output_length);

    return 0;
}

int faas_destroy_func_worker(void *worker_handle) {
    auto context = reinterpret_cast<struct worker_context *>(worker_handle);
    delete context;
    return 0;
}