#!/bin/bash

source_dir=/tmp/dzl/Lumine-benchmarks
build_dir=${source_dir}/cmake-build-126
output_dir=/tmp/finra

#config for launcher
root_path_for_ipc=/dev/shm/ipc2
device_name=mlx5_0
device_port=1
device_gidx=3

# set config file path
export CONFIG_PATH=${source_dir}/Experiments/11/finra_config.json

# set message path
#export MessagePathingMethod=IPC
export MessagePathingMethod=DRC_OVER_IPC
#export MessagePathingMethod=DRC_OVER_Fabric
#export MessagePathingMethod=Fabric

# data path
export FinraDataPath="/tmp/dzl/Lumine-benchmarks/Experiments/11/data/"


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
finra_dir=/experiments/exp11/exp11_finra

# func_id: 51
${build_dir}/Lumine/launcher/launcher \
  --func_id=51 \
  --fprocess=${build_dir}${finra_dir}/exp11_run_audit \
  --fprocess_output_dir=${output_dir}\
  --root_path_for_ipc=${root_path_for_ipc} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp11_run_audit.log 2>&1 &

# func_id: 52
${build_dir}/Lumine/launcher/launcher \
  --func_id=52 \
  --fprocess=${build_dir}${finra_dir}/exp11_margin_balance \
  --fprocess_output_dir=${output_dir}\
  --root_path_for_ipc=${root_path_for_ipc} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp11_margin_balance.log 2>&1 &
