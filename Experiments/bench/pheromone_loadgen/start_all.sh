#!/bin/bash

method=IPC

host_config_path="/home/lgw/Fuyao-benchmarks/Experiments/bench/pheromone_loadgen/service_config.json"

rm_dir="rm -rf /tmp/logs; mkdir /tmp/logs"
ssh -p 22 lgw@192.168.1.126 "${rm_dir}"

# start gateway on Host-126
ssh -p 22 lgw@192.168.1.126 \
  "/tmp/host6/Fuyao/gateway/gateway \
  --config_file=${host_config_path} \
  1>/tmp/logs/gateway.log 2>&1 &"

sleep 0.5

## start engine on Host-126
ssh -p 22 lgw@192.168.1.126 \
  "/tmp/host6/Fuyao/engine/engine \
  --config_file=${host_config_path} \
  --guid=101 \
  1>/tmp/logs/engine.log 2>&1 &"

sleep 1
# start launcher
function run_launcher() {
  ssh -p 22 lgw@${1} \
    "export MessagePathingMethod=${method}; \
    ${2}/Fuyao/launcher/launcher \
        --func_id=${3} \
        --fprocess_mode=cpp \
        --fprocess=${4} \
        --fprocess_output_dir=/tmp/logs \
        --root_path_for_ipc=/dev/shm/ipc4 \
        --device_name=${5} \
        --device_port=${6} \
        --device_gidx=${7} \
        1>/tmp/logs/launcher_${3}.log 2>&1 &"
}

run_launcher "192.168.1.126" "/tmp/host6" "1" "/tmp/host6/experiments/exp09/exp09_start_for_chain" "mlx5_0" "1" "3"
run_launcher "192.168.1.126" "/tmp/host6" "2" "/tmp/host6/experiments/exp09/exp09_start_for_finra" "mlx5_0" "1" "3"
run_launcher "192.168.1.126" "/tmp/host6" "3" "/tmp/host6/experiments/exp09/exp09_start_for_media" "mlx5_0" "1" "3"
