//
// Created by 76284 on 2023/3/7.
//
//
// Created by tank on 8/16/22.
//

#include "func_worker_interface.h"
#include <nlohmann/json.hpp>
#include "stdlib.h"
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
bool is_date(std::string str){
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int y=std::atoi(str.substr(0,2).c_str());
    int m=std::atoi(str.substr(2,2).c_str());
    int d=std::atoi(str.substr(4,2).c_str());

    if(y<=23){
        y+=2000;
    }else{
        y+=1900;
    }
    if((y%4==0&&y%100!=0)||(y%400==0)){//如果是闰年
        month[1] = 29;
        if(0<d&& d<=month[m-1] && m>0 && m<=12)
            return true;
        else
            return false;
    }
    else{
        if(0<d&& d<=month[m-1] && 0<m && 12>=m)
            return true;
        else
            return false;
    }

    return false;
}
int faas_func_call(void *worker_handle,
                   const char *input,
                   size_t input_length) {
    auto context = reinterpret_cast<struct worker_context *>(worker_handle);
    char * data_path;
    if(!(data_path= getenv("FinraDataPath"))){
        perror("please set env FinraDataPath");
    }

    json j;
    std::ifstream jfile(std::string(data_path)+"portfolios.json");
    jfile>>j;
    int tilength = j["1234"].size();
    bool valid=true;
    //lastpx是浮点数（为了保证精度，使用字符串存储），查看小数点左右的位数，不符合要求返回false
    for (int i = 0; i < tilength; i++) {
        auto str=j["1234"][i].at("TradeDate").get<std::string>();
        if (str.length()!=6||!is_date(str)){
            valid= false;
            break;
        }
    }
    json re;
    re["valid"]=valid;
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