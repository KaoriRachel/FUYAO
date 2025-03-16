#!/bin/bash

dpu_config_path="/home/ubuntu/jyqi/Fuyao-benchmarks/Experiments/bench/inter-node/transfer_data/service_config.json"
host_config_path="/home/jyqi/Fuyao-benchmarks/Experiments/bench/inter-node/transfer_data/service_config.json"

# precondition
rm_dir="rm -rf /tmp/logs; mkdir /tmp/logs"
ssh ubuntu@192.168.200.3 "${rm_dir}"
ssh ubuntu@192.168.200.4 "${rm_dir}"
ssh jyqi@192.168.172.5 "${rm_dir}"
ssh jyqi@192.168.172.6 "${rm_dir}"

# start gateway on Host-1
ssh jyqi@192.168.172.5 \
  "/tmp/host9/Fuyao/gateway/gateway \
  --config_file=${host_config_path} \
  1>/tmp/logs/gateway.log 2>&1 &"

sleep 1
## start engine (intra-node engine)
ssh jyqi@192.168.172.5 \
  "/tmp/host9/Fuyao/engine/engine \
  --config_file=${host_config_path} \
  --guid=101 \
  1>/tmp/logs/engine.log 2>&1 &"

ssh jyqi@192.168.172.6 \
  "/tmp/host9/Fuyao/engine/engine \
  --config_file=${host_config_path} \
  --guid=102 \
  1>/tmp/logs/engine.log 2>&1 &"

sleep 2
## start agent (inter-node engine)
ssh ubuntu@192.168.200.3 \
  "/tmp/dpu6/agent/agent \
  --config_file=${dpu_config_path} \
  --guid=201 \
  1>/tmp/logs/agent.log 2>&1 &"

ssh ubuntu@192.168.200.4 \
  "/tmp/dpu9/agent/agent \
  --config_file=${dpu_config_path} \
  --guid=202 \
  1>/tmp/logs/agent.log 2>&1 &"

sleep 2
## start launcher
function run_launcher() {
  ssh jyqi@${1} \
    "export LUMINE_GATEWAY_ADDR=192.168.172.5; \
    export LUMINE_GATEWAY_PORT=8084;\
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

run_launcher "192.168.172.5" "/tmp/host9" "1" "/tmp/host9/experiments/exp01/exp01_fn_a" "mlx5_1" "1" "3"
run_launcher "192.168.172.5" "/tmp/host9" "2" "/tmp/host9/experiments/exp01/exp01_fn_b" "mlx5_1" "1" "3"
run_launcher "192.168.172.5" "/tmp/host9" "3" "/tmp/host9/experiments/exp01/exp01_fn_c" "mlx5_1" "1" "3"
run_launcher "192.168.172.5" "/tmp/host9" "4" "/tmp/host9/experiments/exp01/exp01_fn_d" "mlx5_1" "1" "3"
run_launcher "192.168.172.5" "/tmp/host9" "5" "/tmp/host9/experiments/exp01/exp01_fn_e" "mlx5_1" "1" "3"
run_launcher "192.168.172.5" "/tmp/host9" "6" "/tmp/host9/experiments/exp01/exp01_fn_f" "mlx5_1" "1" "3"

run_launcher "192.168.172.6" "/tmp/host9" "1" "/tmp/host9/experiments/exp01/exp01_fn_a" "mlx5_0" "1" "3"
run_launcher "192.168.172.6" "/tmp/host9" "2" "/tmp/host9/experiments/exp01/exp01_fn_b" "mlx5_0" "1" "3"
run_launcher "192.168.172.6" "/tmp/host9" "3" "/tmp/host9/experiments/exp01/exp01_fn_c" "mlx5_0" "1" "3"
run_launcher "192.168.172.6" "/tmp/host9" "4" "/tmp/host9/experiments/exp01/exp01_fn_d" "mlx5_0" "1" "3"
run_launcher "192.168.172.6" "/tmp/host9" "5" "/tmp/host9/experiments/exp01/exp01_fn_e" "mlx5_0" "1" "3"
run_launcher "192.168.172.6" "/tmp/host9" "6" "/tmp/host9/experiments/exp01/exp01_fn_f" "mlx5_0" "1" "3"
