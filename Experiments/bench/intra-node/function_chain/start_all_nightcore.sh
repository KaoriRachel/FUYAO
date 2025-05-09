#!/bin/bash

# IPC DRC_OVER_IPC DRC_OVER_Fabric Fabric
#method=DRC_OVER_IPC
#method=DRC_OVER_Fabric
method=IPC

absolute_path="/home/jyqi/Fuyao-benchmarks"

#dpu_config_path="/home/ubuntu/lgw/Fuyao-benchmarks/Experiments/bench/06_function_chain/service_config.json"
host_config_path="${absolute_path}/Experiments/bench/intra-node/function_chain/service_config.json"

# precondition
rm -rf /tmp/logs 
mkdir /tmp/logs
#ssh -p 4022 ubuntu@192.168.1.162 "${rm_dir}; cmake --build /tmp/dpu6 --target agent gateway -- -j 8"
#ssh -p 4022 ubuntu@192.168.1.129 "${rm_dir}; cmake --build /tmp/dpu9 --target agent gateway -- -j 8"
#ssh -p 22 lgw@192.168.1.162 "${rm_dir}; cmake --build /tmp/host6 --target gateway engine launcher exp06_back_end exp06_front_end -- -j 16"
#ssh -p 22 lgw@192.168.1.129 "${rm_dir}; cmake --build /tmp/host9 --target gateway engine launcher exp06_back_end exp06_front_end -- -j 16"

#ssh -p 4022 ubuntu@192.168.1.162 "${rm_dir};"
#ssh -p 4022 ubuntu@192.168.1.129 "${rm_dir};"
#ssh -p 22 lgw@192.168.1.162 "${rm_dir};"

# start gateway on DPU
#ssh -p 4022 ubuntu@192.168.1.162 \
#  "/tmp/dpu6/Fuyao/gateway/gateway \
#  --config_file=${dpu_config_path} \
#  1>/tmp/logs/gateway.log 2>&1 &"

# start gateway on Host-129
/tmp/host9/Fuyao/gateway/gateway --config_file=${host_config_path} 1>/tmp/logs/gateway.log 2>&1 &
sleep 1
## start engine
#ssh -p 22 lgw@192.168.1.162 \
#  "/tmp/host6/Fuyao/engine/engine \
#  --config_file=${host_config_path} \
#  --guid=101 \
#  1>/tmp/logs/engine.log 2>&1 &"

/tmp/host9/Fuyao/engine/engine --config_file=${host_config_path} --guid=102 1>/tmp/logs/engine.log 2>&1 &
#sleep 4
# start agent
#ssh -p 4022 ubuntu@192.168.1.162 \
#  "/tmp/dpu6/Fuyao/agent/agent \
#  --config_file=${dpu_config_path} \
#  --guid=201 \
#  1>/tmp/logs/agent.log 2>&1 &"
#
#ssh -p 4022 ubuntu@192.168.1.129 \
#  "/tmp/dpu9/Fuyao/agent/agent \
#  --config_file=${dpu_config_path} \
#  --guid=202 \
#  1>/tmp/logs/agent.log 2>&1 &"

sleep 4
# start launcher
function run_launcher() {
    export MessagePathingMethod=${method}; \
    ${1}/Fuyao/launcher/launcher \
        --func_id=${2} \
        --fprocess_mode=cpp \
        --fprocess=${3} \
        --fprocess_output_dir=/tmp/logs \
        --root_path_for_ipc=/dev/shm/ipc4 \
        --device_name=${4} \
        --device_port=${5} \
        --device_gidx=${6} \
        1>/tmp/logs/launcher_${2}.log 2>&1 &
}

#run_launcher "192.168.1.162" "/tmp/host6" "1" "/tmp/host6/experiments/exp06/exp06_front_end" "mlx5_0" "1" "3"
#run_launcher "192.168.1.162" "/tmp/host6" "2" "/tmp/host6/experiments/exp06/exp06_back_end" "mlx5_0" "1" "3"

run_launcher "/tmp/host9" "1" "/tmp/host9/experiments/exp06/exp06_front_end" "mlx5_1" "1" "3"
run_launcher "/tmp/host9" "2" "/tmp/host9/experiments/exp06/exp06_back_end" "mlx5_1" "1" "3"
