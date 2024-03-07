#!/bin/bash

# need to modify
device_name=mlx5_0
device_port=1
device_gidx=3


# set message paths
export MessagePathingMethod=IPC
#export MessagePathingMethod=DRC_OVER_IPC
#export MessagePathingMethod=DRC_OVER_Fabric
#export MessagePathingMethod=Fabric

export PICTURE_PATH=/home/lgw/Lumine-benchmarks/Experiments/07/data/grace_hopper.jpg
export GRAPH_PATH=/home/lgw/Lumine-benchmarks/Experiments/07/model/mobilenet_v2_1.4_224_frozen.pb

#--------------------------

rm -rf /tmp/exp07
mkdir /tmp/exp07

root_path_for_ipc_1=/dev/shm/ipc4
#root_path_for_ipc_2=/dev/shm/ipc6

build_dir=/tmp/lumine-benchmarks
output_dir=/tmp/exp07
config_file_path=$(pwd)/../debug/service_config.json

# start gateway
${build_dir}/Lumine/gateway/gateway \
  --config_file=${config_file_path} \
  1>${output_dir}/gateway.log 2>&1 &
#sleep 1

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
${build_dir}/Lumine/launcher/launcher \
  --func_id=1 \
  --fprocess_mode=cpp \
  --fprocess=${build_dir}/experiments/exp07/exp07_resize \
  --fprocess_output_dir=${output_dir} \
  --root_path_for_ipc=${root_path_for_ipc_1} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp07_resize.log 2>&1 &

${build_dir}/Lumine/launcher/launcher \
  --func_id=2 \
  --fprocess_mode=cpp \
  --fprocess=${build_dir}/experiments/exp07/exp07_label \
  --fprocess_output_dir=${output_dir} \
  --root_path_for_ipc=${root_path_for_ipc_1} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp07_label.log 2>&1 &

${build_dir}/Lumine/launcher/launcher \
  --func_id=3 \
  --fprocess_mode=cpp \
  --fprocess=${build_dir}/experiments/exp07/exp07_average \
  --fprocess_output_dir=${output_dir} \
  --root_path_for_ipc=${root_path_for_ipc_1} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp07_average.log 2>&1 &

## for engine 102