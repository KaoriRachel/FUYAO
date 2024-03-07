//
// Created by tank on 3/17/23.
//

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <string>

#include "func_worker_interface.h"
#include "utils.h"

using namespace std;
using namespace cv;

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

    long start_time = exp07_utils::get_timestamp_us();

    // image file path
    string file_name = getenv("PICTURE_PATH");

    int width = 224, height = 224, channel = 3;
    cv::Mat img = cv::imread(file_name);
    cv::resize(img, img, cv::Size(height, height));
    img.convertTo(img, CV_32FC3, 1/255.0);

    vector<cv::Mat> channels;
    cv::split(img, channels);

    auto resized_img = new float[width * height * channel * 4];
    int index = 0;
    for (int c = 2; c >= 0; --c) { // R,G,B
        for (int h = 0; h < height; ++h) {
            for (int w = 0; w < width; ++w) {
                resized_img[index] = channels[c].at<float>(h, w); // R->G->B
                index++;
            }
        }
    }

    const char *output;
    size_t output_length;
    int ret = context->invoke_func_fn(context->caller_context,
                                      "exp07Label",
                                      reinterpret_cast<char *>(resized_img),
                                      width * height * channel * 4 * sizeof(float),
                                      &output, &output_length, PassingMethod::IPC);

    delete[] resized_img;

    if(ret != 0)
        return -1;

    long end_time = *((long *)output);

    char response[128];
    sprintf(response, "invocation latency : %ld\n", end_time - start_time);

    context->append_output_fn(context->caller_context, response, strlen(response));

    return 0;
}

int faas_destroy_func_worker(void *worker_handle) {
    auto context = reinterpret_cast<struct worker_context *>(worker_handle);
    delete context;
    return 0;
}