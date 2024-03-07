//
// Created by 76284 on 2023/3/7.
//
//
// Created by tank on 8/16/22.
//

#include "func_worker_interface.h"
#include <nlohmann/json.hpp>
#include "utils.h"
#include <iostream>
#include <string.h>
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

    int ret_last_px, ret_side, ret_volume, ret_trade_date,ret_marketdata;
    const char *output_last_px,*output_side,*output_volume,*output_trddate,*output_marketdata;
    size_t length_last_px,length_side,length_volume,length_trddate,length_marketdata;
    //调用第一阶段的五个函数
    ret_last_px = context->invoke_func_fn(context->caller_context,
                                   "exp05LastPx",
                                   input,
                                   input_length,
                                   &output_last_px, &length_last_px, Finra::ChooseMessagePassingMethod());
    ret_side = context->invoke_func_fn(context->caller_context,
                                          "exp05Side",
                                          input,
                                          input_length,
                                          &output_side, &length_side, Finra::ChooseMessagePassingMethod());
    ret_volume = context->invoke_func_fn(context->caller_context,
                                          "exp05Volume",
                                          input,
                                          input_length,
                                          &output_volume, &length_volume, Finra::ChooseMessagePassingMethod());
    ret_trade_date = context->invoke_func_fn(context->caller_context,
                                          "exp05TradeDate",
                                          input,
                                          input_length,
                                          &output_trddate, &length_trddate, Finra::ChooseMessagePassingMethod());
    ret_marketdata = context->invoke_func_fn(context->caller_context,
                                          "exp05MarketData",
                                          input,
                                          input_length,
                                          &output_marketdata, &length_marketdata, Finra::ChooseMessagePassingMethod());
    bool ret=ret_last_px|ret_side|ret_volume|ret_trade_date|ret_marketdata;
    //这四个函数验证数据的有效性，必须全部为true才有效
    bool valid_last_px=json::parse(output_last_px).at("valid").get<bool>();
    bool valid_side=json::parse(output_side).at("valid").get<bool>();
    bool valid_volume=json::parse(output_volume).at("valid").get<bool>();
    bool valid_trade_date=json::parse(output_trddate).at("valid").get<bool>();
    bool valid=valid_last_px&valid_side&valid_volume&valid_trade_date;
    if(!valid){
        char output[]="not valid\n";
        context->append_output_fn(context->caller_context, output, strlen(output));
        return ret;
    }
    //从yahoo财经读取的当前市场数据
    auto market_data_json=json::parse(output_marketdata);
    //读取json文件
    char * data_path;
    if(!(data_path= getenv("FinraDataPath"))){
        perror("please set env FinraDataPath");
    }

    json j_marginBalance,j_portfolios;
    std::ifstream j_marginBalance_file(std::string(data_path)+"marginBalance.json");
    std::ifstream j_portfolios_file(std::string(data_path)+"portfolios.json");
    j_marginBalance_file>>j_marginBalance;
    j_portfolios_file>>j_portfolios;

    //读取数据，并计算结果
    double marginAccountBalance=j_marginBalance.at("1234").get<double>();
    auto trade_num=j_portfolios["1234"].size();

    double portfolioMarketValue = 0;
    for (int i = 0; i < trade_num; i++){
        std::string security=j_portfolios["1234"][i].at("Security").get<std::string>();
        double qty=std::stold(j_portfolios["1234"][i].at("LastQty").get<std::string>().c_str());
        double market_dataprice=std::stold(market_data_json.at(security).get<std::string>().c_str());
        portfolioMarketValue+=qty*market_dataprice;
    }
    //return
    if (marginAccountBalance>=0.25*portfolioMarketValue){
        char output[]="true\n";
        context->append_output_fn(context->caller_context, output, strlen(output));
    }else{
        char output[]="false\n";
        context->append_output_fn(context->caller_context, output, strlen(output));
    }
    return ret;
}

int faas_destroy_func_worker(void *worker_handle) {
    auto context = reinterpret_cast<struct worker_context *>(worker_handle);
    delete context;
    return 0;
}