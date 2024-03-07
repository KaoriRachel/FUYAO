//
// Created by tank on 3/17/23.
//
#include "tensorflow/cc/ops/const_op.h"
#include "tensorflow/cc/ops/image_ops.h"
#include "tensorflow/cc/ops/standard_ops.h"
#include "tensorflow/core/framework/graph.pb.h"
#include "tensorflow/core/framework/tensor.h"
#include "tensorflow/core/graph/default_device.h"
#include "tensorflow/core/graph/graph_def_builder.h"
#include "tensorflow/core/lib/core/errors.h"
#include "tensorflow/core/lib/core/stringpiece.h"
#include "tensorflow/core/lib/core/threadpool.h"
#include "tensorflow/core/lib/io/path.h"
#include "tensorflow/core/lib/strings/stringprintf.h"
#include "tensorflow/core/platform/init_main.h"
#include "tensorflow/core/platform/logging.h"
#include "tensorflow/core/platform/types.h"
#include "tensorflow/core/public/session.h"
#include "tensorflow/core/util/command_line_flags.h"

#include "func_worker_interface.h"

using tensorflow::Flag;
using tensorflow::Tensor;
using tensorflow::Status;
using tensorflow::string;
using tensorflow::int32;
using namespace std;

// Reads a model graph definition from disk, and creates a session object you
// can use to run it.
Status LoadGraph(const string &graph_file_name, std::unique_ptr<tensorflow::Session> *session) {
    tensorflow::GraphDef graph_def;
    Status load_graph_status =
            ReadBinaryProto(tensorflow::Env::Default(), graph_file_name, &graph_def);
    if (!load_graph_status.ok()) {
        return tensorflow::errors::NotFound("Failed to load compute graph at '",
                                            graph_file_name, "'");
    }
    session->reset(tensorflow::NewSession(tensorflow::SessionOptions()));
    Status session_create_status = (*session)->Create(graph_def);
    if (!session_create_status.ok()) {
        return session_create_status;
    }
    return Status::OK();
}

struct worker_context {
    void *caller_context;
    faas_invoke_func_fn_t invoke_func_fn;
    faas_append_output_fn_t append_output_fn;
};

std::unique_ptr<tensorflow::Session> session;

int faas_init() {
    // Model path
    std::string graph_path = getenv("GRAPH_PATH");
    Status load_graph_status = LoadGraph(graph_path, &session);
    if (!load_graph_status.ok()) {
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

    auto img = reinterpret_cast<const float *>(input);

    int32 input_width = 224, input_height = 224;
    string input_layer = "input:0", output_layer = "MobilenetV2/Predictions/Reshape_1:0";

    // Get the image from disk as a float array of numbers, resized and normalized
    // to the specifications the main graph expects.
    std::vector<Tensor> resized_tensors;
    Tensor input1(
            tensorflow::DT_FLOAT,
            tensorflow::TensorShape({ 1,input_width, input_height, 3 }));

    auto input_map = input1.tensor<float, 4>();
    int step = input_width * input_height;
    for (int c = 0; c < 3; ++c) {
        int index = 0;
        for (int y = 0; y < input_width; ++y) {
            for (int x = 0; x < input_height; ++x) {
                input_map(0, y, x, c) = img[index + c * step];
                index++;
            }
        }
    }

    // Actually run the image through the model.
    std::vector<Tensor> outputs;
    Status run_status = session->Run({{input_layer, input1}},
                                     {output_layer}, {}, &outputs);
    if (!run_status.ok()) {
        LOG(ERROR) << "Running model failed: " << run_status;
        return 1;
    }

    Tensor t = outputs[0];

    auto size = t.shape().dim_size(1);
    auto tmap = t.tensor<float, 2>();

    auto out_ptr_ = new float [1 + size];
    out_ptr_[0] = size;
    for (int i = 0; i < size; i++){
        out_ptr_[i + 1] = tmap(0, i);
    }

    const char *output;
    size_t output_length;
    int ret = context->invoke_func_fn(context->caller_context,
                                      "exp07Average",
                                      reinterpret_cast<char *>(out_ptr_),
                                      (1 + size) * sizeof(float),
                                      &output, &output_length, PassingMethod::IPC);

    delete[] out_ptr_;

    if(ret != 0)
        return -1;

    context->append_output_fn(context->caller_context, output, output_length);

    return 0;
}

int faas_destroy_func_worker(void *worker_handle) {
    auto context = reinterpret_cast<struct worker_context *>(worker_handle);
    delete context;
    return 0;
}