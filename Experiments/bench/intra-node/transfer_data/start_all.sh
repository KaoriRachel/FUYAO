#!/bin/bash

host_config_path="/home/lgw/Fuyao-benchmarks/Experiments/bench/intra-node/transfer_data/service_config.json"

# precondition
rm_dir="rm -rf /tmp/logs; mkdir /tmp/logs"
ssh -p 22 lgw@192.168.1.129 "${rm_dir}"

# start gateway on DPU
ssh -p 22 lgw@192.168.1.129 \
  "/tmp/host9/Fuyao/gateway/gateway \
  --config_file=${host_config_path} \
  1>/tmp/logs/gateway.log 2>&1 &"

sleep 1
## start engine
ssh -p 22 lgw@192.168.1.129 \
  "/tmp/host9/Fuyao/engine/engine \
  --config_file=${host_config_path} \
  --guid=102 \
  1>/tmp/logs/engine.log 2>&1 &"

sleep 2
## start launcher
function run_launcher() {
  ssh -p 22 lgw@${1} \
    " ${2}/Fuyao/launcher/launcher \
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


#run_launcher "192.168.1.129" "/tmp/host9" "1" "/tmp/host9/experiments/exp01/exp01_fn_a" "mlx5_0" "1" "3"
run_launcher "192.168.1.129" "/tmp/host9" "2" "/tmp/host9/experiments/exp01/exp01_fn_b" "mlx5_0" "1" "3"
run_launcher "192.168.1.129" "/tmp/host9" "3" "/tmp/host9/experiments/exp01/exp01_fn_c" "mlx5_0" "1" "3"
#run_launcher "192.168.1.129" "/tmp/host9" "4" "/tmp/host9/experiments/exp01/exp01_fn_d" "mlx5_0" "1" "3"
run_launcher "192.168.1.129" "/tmp/host9" "5" "/tmp/host9/experiments/exp01/exp01_fn_e" "mlx5_0" "1" "3"
#run_launcher "192.168.1.129" "/tmp/host9" "6" "/tmp/host9/experiments/exp01/exp01_fn_f" "mlx5_0" "1" "3"
