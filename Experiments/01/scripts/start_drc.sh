#!/bin/bash

# need to modify
device_name=mlx5_0
device_port=1
device_gidx=3

#--------------------------

rm -rf /tmp/exp01
mkdir /tmp/exp01

root_path_for_ipc_1=/dev/shm/ipc4
root_path_for_ipc_2=/dev/shm/ipc6

build_dir=/tmp/lumine-benchmarks
output_dir=/tmp/exp01
config_file_path=$(pwd)/../debug/service_config.json

# start gateway
${build_dir}/Lumine/gateway/gateway \
  --config_file=${config_file_path} \
  1>${output_dir}/gateway.log 2>&1 &
sleep 2

# start engine
${build_dir}/Lumine/engine/engine \
  --config_file=${config_file_path} \
  --guid=101 1>${output_dir}/engine1.log 2>&1 &

${build_dir}/Lumine/engine/engine \
  --config_file=${config_file_path} \
  --guid=102 1>${output_dir}/engine2.log 2>&1 &

sleep 2

# start agent (only for test)
${build_dir}/Lumine/agent/agent \
  --config_file=${config_file_path} \
  --guid=201 1>${output_dir}/agent1.log 2>&1 &

${build_dir}/Lumine/agent/agent \
  --config_file=${config_file_path} \
  --guid=202 1>${output_dir}/agent2.log 2>&1 &

# start functions with launcher
## for engine 101
${build_dir}/Lumine/launcher/launcher \
  --func_id=3 \
  --fprocess_mode=cpp \
  --fprocess=${build_dir}/experiments/exp01/exp01_fn_c \
  --fprocess_output_dir=${output_dir} \
  --root_path_for_ipc=${root_path_for_ipc_1} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp01_fn_c_1.log 2>&1 &

${build_dir}/Lumine/launcher/launcher \
  --func_id=5 \
  --fprocess_mode=cpp \
  --fprocess=${build_dir}/experiments/exp01/exp01_fn_e \
  --fprocess_output_dir=${output_dir} \
  --root_path_for_ipc=${root_path_for_ipc_1} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp01_fn_e_1.log 2>&1 &

${build_dir}/Lumine/launcher/launcher \
  --func_id=6 \
  --fprocess_mode=cpp \
  --fprocess=${build_dir}/experiments/exp01/exp01_fn_f \
  --fprocess_output_dir=${output_dir} \
  --root_path_for_ipc=${root_path_for_ipc_1} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp01_fn_f_1.log 2>&1 &

## for engine 102
${build_dir}/Lumine/launcher/launcher \
  --func_id=3 \
  --fprocess_mode=cpp \
  --fprocess=${build_dir}/experiments/exp01/exp01_fn_c \
  --fprocess_output_dir=${output_dir} \
  --root_path_for_ipc=${root_path_for_ipc_2} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp01_fn_c_2.log 2>&1 &

${build_dir}/Lumine/launcher/launcher \
  --func_id=5 \
  --fprocess_mode=cpp \
  --fprocess=${build_dir}/experiments/exp01/exp01_fn_e \
  --fprocess_output_dir=${output_dir} \
  --root_path_for_ipc=${root_path_for_ipc_2} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp01_fn_e_2.log 2>&1 &

${build_dir}/Lumine/launcher/launcher \
  --func_id=6 \
  --fprocess_mode=cpp \
  --fprocess=${build_dir}/experiments/exp01/exp01_fn_f \
  --fprocess_output_dir=${output_dir} \
  --root_path_for_ipc=${root_path_for_ipc_2} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp01_fn_f_2.log 2>&1 &