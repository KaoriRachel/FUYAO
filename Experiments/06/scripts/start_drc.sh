#!/bin/bash

# need to modify
device_name=mlx5_0
device_port=1
device_gidx=3


# set message path
export MessagePathingMethod=IPC
#export MessagePathingMethod=DRC_OVER_IPC
#export MessagePathingMethod=DRC_OVER_Fabric
#export MessagePathingMethod=Fabric

#--------------------------

rm -rf /tmp/exp06
mkdir /tmp/exp06

root_path_for_ipc_1=/dev/shm/ipc4
#root_path_for_ipc_2=/dev/shm/ipc6

build_dir=/tmp/lumine-benchmarks
output_dir=/tmp/exp06
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
  --fprocess=${build_dir}/experiments/exp06/exp06_front_end \
  --fprocess_output_dir=${output_dir} \
  --root_path_for_ipc=${root_path_for_ipc_1} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp06_front_end_1.log 2>&1 &

${build_dir}/Lumine/launcher/launcher \
  --func_id=2 \
  --fprocess_mode=cpp \
  --fprocess=${build_dir}/experiments/exp06/exp06_back_end \
  --fprocess_output_dir=${output_dir} \
  --root_path_for_ipc=${root_path_for_ipc_1} \
  --device_name=${device_name} \
  --device_port=${device_port} \
  --device_gidx=${device_gidx} \
  1>${output_dir}/exp06_back_end_1.log 2>&1 &

## for engine 102