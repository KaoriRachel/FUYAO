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
export CONFIG_PATH=${source_dir}/Experiments/05/finra_config.json

# set message path
#export MessagePathingMethod=IPC
export MessagePathingMethod=DRC_OVER_IPC
#export MessagePathingMethod=DRC_OVER_Fabric
#export MessagePathingMethod=Fabric

# data path
export FinraDataPath="/tmp/dzl/Lumine-benchmarks/Experiments/05/data/"


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
finra_dir=/experiments/exp05/exp05_finra

# func_id: 51
${build_dir}/Lumine/launcher/launcher \
  --func_id=51 \
  --fprocess=${build_dir}${finra_dir}/exp05_last_px \
  --fprocess_output_dir=${output_dir}\
  --root_path_for_ipc=${root_path_for_ipc} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp05_last_px.log 2>&1 &

# func_id: 52
${build_dir}/Lumine/launcher/launcher \
  --func_id=52 \
  --fprocess=${build_dir}${finra_dir}/exp05_market_data \
  --fprocess_output_dir=${output_dir}\
  --root_path_for_ipc=${root_path_for_ipc} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp05_market_data.log 2>&1 &

# func_id: 53
${build_dir}/Lumine/launcher/launcher \
  --func_id=53 \
  --fprocess=${build_dir}${finra_dir}/exp05_side \
  --fprocess_output_dir=${output_dir}\
  --root_path_for_ipc=${root_path_for_ipc} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp05_side.log 2>&1 &

# func_id: 54
${build_dir}/Lumine/launcher/launcher \
  --func_id=54 \
  --fprocess=${build_dir}${finra_dir}/exp05_trade_date \
  --fprocess_output_dir=${output_dir}\
  --root_path_for_ipc=${root_path_for_ipc} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp05_trade_date.log 2>&1 &

# func_id: 55
${build_dir}/Lumine/launcher/launcher \
  --func_id=55 \
  --fprocess=${build_dir}${finra_dir}/exp05_valume \
  --fprocess_output_dir=${output_dir}\
  --root_path_for_ipc=${root_path_for_ipc} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp05_valume.log 2>&1 &

# func_id: 56
${build_dir}/Lumine/launcher/launcher \
  --func_id=56 \
  --fprocess=${build_dir}${finra_dir}/exp05_margin_balance \
  --fprocess_output_dir=${output_dir}\
  --root_path_for_ipc=${root_path_for_ipc} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp05_margin_balance.log 2>&1 &