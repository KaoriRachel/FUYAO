#!/bin/bash

# need to modify
device_name=mlx5_0
device_port=1
device_gidx=3

#--------------------------

rm -rf /tmp/exp08
mkdir /tmp/exp08

rm -rf /tmp/logs
mkdir /tmp/logs

#root_path_for_ipc_1=/dev/shm/ipc4
#root_path_for_ipc_2=/dev/shm/ipc6

build_dir=/tmp/host9
output_dir=/tmp/exp08
config_file_path=$(pwd)/../debug/service_config.json

# start gateway
${build_dir}/Lumine/gateway/gateway \
  --config_file=${config_file_path} \
  1>${output_dir}/gateway.log 2>&1 &
sleep 1

# start engine
${build_dir}/Lumine/engine/engine \
  --config_file=${config_file_path} \
  --guid=101 1>${output_dir}/engine1.log 2>&1 &

#${build_dir}/Lumine/engine/engine \
#  --config_file=${config_file_path} \
#  --guid=102 1>${output_dir}/engine2.log 2>&1 &

sleep 1

# start agent (only for test)
#${build_dir}/Lumine/agent/agent \
#  --config_file=${config_file_path} \
#  --guid=201 1>${output_dir}/agent1.log 2>&1 &
#
#${build_dir}/Lumine/agent/agent \
#  --config_file=${config_file_path} \
#  --guid=202 1>${output_dir}/agent2.log 2>&1 &

# start functions with launcher
## for engine 101
#${build_dir}/Lumine/launcher/launcher \
#  --func_id=1 \
#  --fprocess_mode=cpp \
#  --fprocess=${build_dir}/experiments/exp08/exp08_upstream \
#  --fprocess_output_dir=${output_dir} \
#  --root_path_for_ipc=${root_path_for_ipc_1} \
#  --device_name=${device_name} \
#  --device_port=${device_port} \
#  --device_gidx=${device_gidx} \
#  1>${output_dir}/exp08_upstream_1.log 2>&1 &

#${build_dir}/Lumine/launcher/launcher \
#  --func_id=2 \
#  --fprocess_mode=cpp \
#  --fprocess=${build_dir}/experiments/exp08/exp08_downstream \
#  --fprocess_output_dir=${output_dir} \
#  --root_path_for_ipc=${root_path_for_ipc_1} \
#  --device_name=${device_name} \
#  --device_port=${device_port} \
#  --device_gidx=${device_gidx} \
#  1>${output_dir}/exp08_downstream_0.log 2>&1 &

## start launcher
function run_launcher() {
  ${1}/Lumine/launcher/launcher \
    --func_id=${2} \
    --fprocess_mode=cpp \
    --fprocess=${3} \
    --fprocess_output_dir=/tmp/logs \
    --root_path_for_ipc=/dev/shm/ipc4 \
    --device_name=${device_name} \
    --device_port=${device_port} \
    --device_gidx=${device_gidx} \
    1>/tmp/logs/launcher_${2}.log 2>&1 &
}

thread_num=80
for ((i=1; i<= ${thread_num}; i++)); do
  run_launcher ${build_dir} $(($i+1)) ${build_dir}/experiments/exp08/exp08_downstream
done

run_launcher ${build_dir} 1 ${build_dir}/experiments/exp08/exp08_upstream

## for engine 102
