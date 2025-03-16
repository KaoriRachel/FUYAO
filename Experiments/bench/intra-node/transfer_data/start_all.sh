#!/bin/bash

host_config_path="/home/jyqi/Fuyao-benchmarks/Experiments/bench/intra-node/transfer_data/service_config.json"

# precondition
rm -rf /tmp/logs
mkdir /tmp/logs

# start gateway on DPU
/tmp/host9/Fuyao/gateway/gateway --config_file=${host_config_path} 1>/tmp/logs/gateway.log 2>&1 &

sleep 1
## start engine
/tmp/host9/Fuyao/engine/engine --config_file=${host_config_path} --guid=102 1>/tmp/logs/engine.log 2>&1 &

sleep 2
## start launcher
function run_launcher() {
  ssh jyqi@${1} \
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
run_launcher "192.168.172.5" "/tmp/host9" "2" "/tmp/host9/experiments/exp01/exp01_fn_b" "mlx5_1" "1" "3"
run_launcher "192.168.172.5" "/tmp/host9" "3" "/tmp/host9/experiments/exp01/exp01_fn_c" "mlx5_1" "1" "3"
#run_launcher "192.168.1.129" "/tmp/host9" "4" "/tmp/host9/experiments/exp01/exp01_fn_d" "mlx5_0" "1" "3"
run_launcher "192.168.172.5" "/tmp/host9" "5" "/tmp/host9/experiments/exp01/exp01_fn_e" "mlx5_1" "1" "3"
#run_launcher "192.168.1.129" "/tmp/host9" "6" "/tmp/host9/experiments/exp01/exp01_fn_f" "mlx5_0" "1" "3"
