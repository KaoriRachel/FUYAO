#!/bin/bash
set ff=unix
source_dir=/tmp/dzl/Lumine-benchmarks
build_dir=${source_dir}/cmake-build-126
output_dir=/tmp/exp10

#config for launcher
root_path_for_ipc=/dev/shm/ipc2
device_name=mlx5_0
device_port=1
device_gidx=3

# set config file path
export CONFIG_PATH=${source_dir}/Experiments/10/exp10_config.json

# set message path
#export MessagePathingMethod=IPC
export MessagePathingMethod=DRC_OVER_IPC
#export MessagePathingMethod=DRC_OVER_Fabric
#export MessagePathingMethod=Fabric

# start gateway
${build_dir}/Lumine/gateway/gateway \
  --config_file=${CONFIG_PATH} \
  1>${output_dir}/gateway.log 2>&1 &

sleep 2

# start engine
${build_dir}/Lumine/engine/engine \
  --config_file=${CONFIG_PATH} \
  --guid=101 1>${output_dir}/engine.log 2>&1 &

sleep 2

# start functions
exp10_dir=/experiments/exp10/exp10_fuyao

# func_id: 101
${build_dir}/Lumine/launcher/launcher \
  --func_id=101 \
  --fprocess=${build_dir}${exp10_dir}/exp10_fn_a \
  --fprocess_output_dir=${output_dir}\
  --root_path_for_ipc=${root_path_for_ipc} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp10_fn_a.log 2>&1 &

# func_id: 102
${build_dir}/Lumine/launcher/launcher \
  --func_id=102 \
  --fprocess=${build_dir}${exp10_dir}/exp10_fn_b \
  --fprocess_output_dir=${output_dir}\
  --root_path_for_ipc=${root_path_for_ipc} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp10_fn_b.log 2>&1 &