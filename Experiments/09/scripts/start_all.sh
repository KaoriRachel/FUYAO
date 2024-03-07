#!/bin/bash

method=IPC

host_config_path="/home/lgw/Lumine-benchmarks/Experiments/09/debug/service_config.json"

# precondition
rm_dir="rm -rf /tmp/logs; mkdir /tmp/logs"
#ssh -p 22 lgw@192.168.1.192 "${rm_dir}; cmake --build /tmp/host9 --target gateway engine exp09_start exp09_start_for_finra exp09_end exp09_register launcher -- -j 32"
ssh -p 22 lgw@192.168.1.192 "${rm_dir}"

# start gateway on DPU
ssh -p 22 lgw@192.168.1.192 \
  "/tmp/host9/Lumine/gateway/gateway \
  --config_file=${host_config_path} \
  1>/tmp/logs/gateway.log 2>&1 &"

sleep 1

## start engine
ssh -p 22 lgw@192.168.1.192 \
  "/tmp/host9/Lumine/engine/engine \
  --config_file=${host_config_path} \
  --guid=102 \
  1>/tmp/logs/engine.log 2>&1 &"

sleep 1

# start launcher
function run_launcher() {
  ssh -p 22 lgw@${1} \
    "export MessagePathingMethod=${method}; \
    ${2}/Lumine/launcher/launcher \
        --func_id=${3} \
        --fprocess_mode=cpp \
        --fprocess=${4} \
        --fprocess_output_dir=/tmp/logs \
        --root_path_for_ipc=/dev/shm/ipc6 \
        --device_name=${5} \
        --device_port=${6} \
        --device_gidx=${7} \
        1>/tmp/logs/launcher_${3}.log 2>&1 &"
}

run_launcher "192.168.1.192" "/tmp/host9" "1" "/tmp/host9/experiments/exp09/exp09_start" "mlx5_0" "1" "3"
run_launcher "192.168.1.192" "/tmp/host9" "2" "/tmp/host9/experiments/exp09/exp09_end" "mlx5_0" "1" "3"
#run_launcher "192.168.1.192" "/tmp/host9" "3" "/tmp/host9/experiments/exp09/exp09_register" "mlx5_0" "1" "3"
#run_launcher "192.168.1.192" "/tmp/host9" "4" "/tmp/host9/experiments/exp09/exp09_start_for_finra" "mlx5_0" "1" "3"