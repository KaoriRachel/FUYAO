#!/bin/bash

source_dir=/tmp/dzl/Lumine-benchmarks
build_dir=${source_dir}/cmake-build-126
output_dir=/tmp/exp01

#config for launcher
root_path_for_ipc=/dev/shm/ipc2
device_name=mlx5_0
device_port=1
device_gidx=3

# set config file path
export CONFIG_PATH=${source_dir}/Experiments/config.json

# set message path
#export MessagePathingMethod=IPC
export MessagePathingMethod=DRC_OVER_IPC
#export MessagePathingMethod=DRC_OVER_Fabric
#export MessagePathingMethod=Fabric

# start gateway
${build_dir}/Lumine/gateway/gateway \
  --config_file=${source_dir}/Experiments/config.json \
  1>${output_dir}/gateway.log 2>&1 &

sleep 2

# start engine
${build_dir}/Lumine/engine/engine \
  --config_file=${source_dir}/Experiments/config.json \
  --guid=101 1>${output_dir}/engine.log 2>&1 &

sleep 2

exp_01_dir=/experiments/exp01
#c-3
${build_dir}/Lumine/launcher/launcher \
  --func_id=3 \
  --fprocess=${build_dir}${exp_01_dir}/exp01_fn_c \
  --fprocess_output_dir=${output_dir}\
  --root_path_for_ipc=${root_path_for_ipc} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp01_fn_c.log 2>&1 &

#e-5
${build_dir}/Lumine/launcher/launcher \
  --func_id=5 \
  --fprocess=${build_dir}${exp_01_dir}/exp01_fn_e \
  --fprocess_output_dir=${output_dir}\
  --root_path_for_ipc=${root_path_for_ipc} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp01_fn_e.log 2>&1 &