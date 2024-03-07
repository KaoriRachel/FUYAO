//
// Created by 76284 on 2023/3/7.
//
//
// Created by tank on 8/16/22.
//

#include "func_worker_interface.h"
#include <nlohmann/json.hpp>

#include <fstream>
#include <iostream>
#include <string.h>
#include "base/logging.h"
#include <fmt/core.h>
#include <fmt/format.h>
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
    std::string tickersForPortfolioTypes[]={"GOOG","AMZN","MSFT"};
    json re;
    for(std::string ticker:tickersForPortfolioTypes){
        usleep(232000);//模拟查询http服务器延迟，yahoo比较慢
    }

    re["GOOG"]="1732.38";
    re["AMZN"]="3185.27";
    re["MSFT"]="221.02";

    std::string re_str=re.dump();
    // send the output back to the engine
    context->append_output_fn(context->caller_context, re_str.c_str(), re_str.length());
    return 0;
}

int faas_destroy_func_worker(void *worker_handle) {
    auto context = reinterpret_cast<struct worker_context *>(worker_handle);
    delete context;
    return 0;
}