#!/bin/bash

#method=IPC
method=DRC_OVER_IPC
#method=DRC_OVER_Fabric

absolute_path="/home/jyqi/Fuyao-benchmarks"
host_config_path="${absolute_path}/Experiments/bench/intra-node/finra/service_config.json"

finra_data_path="${absolute_path}/Experiments/11/data/"

server_ip="192.168.172.5"
build_dir="host9"

# precondition
rm -rf /tmp/logs
mkdir /tmp/logs

#ssh -p 22 lgw@${server_ip} "${rm_dir}; cmake --build /tmp/${build_dir} --target gateway engine exp11_run_audit exp11_margin_balance launcher -- -j 32"

# start gateway on Host-129
  /tmp/${build_dir}/Fuyao/gateway/gateway --config_file=${host_config_path} 1>/tmp/logs/gateway.log 2>&1 &

sleep 1

## start engine
  /tmp/${build_dir}/Fuyao/engine/engine --config_file=${host_config_path} --guid=102 1>/tmp/logs/engine.log 2>&1 &

sleep 1

# start launcher
#thread_num=40
#thread_num2=50


thread_num=22

for ((i = 2; i < ${thread_num}; i++)); do
  export MessagePathingMethod=${method}
  export FinraDataPath=${finra_data_path}; \
    /tmp/${build_dir}/Fuyao/launcher/launcher \
        --func_id=${i} \
        --fprocess_mode=cpp \
        --fprocess=/tmp/${build_dir}/experiments/exp11/exp11_run_audit \
        --fprocess_output_dir=/tmp/logs \
        --root_path_for_ipc=/dev/shm/ipc6 \
        --device_name=mlx5_1 \
        --device_port=1 \
        --device_gidx=3 \
        1>/tmp/logs/launcher_${i}.log 2>&1 & done

#sleep 2
#
#ssh -p 22 lgw@${server_ip}\
#  "for ((i = ${thread_num}; i <= $((thread_num + thread_num2)); i++)); do \
#  export MessagePathingMethod=${method}; \
#  export FinraDataPath=${finra_data_path}; \
#    /tmp/${build_dir}/Fuyao/launcher/launcher \
#        --func_id=\${i} \
#        --fprocess_mode=cpp \
#        --fprocess=/tmp/${build_dir}/experiments/exp11/exp11_run_audit \
#        --fprocess_output_dir=/tmp/logs \
#        --root_path_for_ipc=/dev/shm/ipc6 \
#        --device_name=mlx5_0 \
#        --device_port=1 \
#        --device_gidx=3 \
#        1>/tmp/logs/launcher_\${i}.log 2>&1 & done"

  export MessagePathingMethod=${method}
    /tmp/${build_dir}/Fuyao/launcher/launcher \
        --func_id=1 \
        --fprocess_mode=cpp \
        --fprocess=/tmp/${build_dir}/experiments/exp11/exp11_margin_balance \
        --fprocess_output_dir=/tmp/logs \
        --root_path_for_ipc=/dev/shm/ipc6 \
        --device_name=mlx5_1 \
        --device_port=1 \
        --device_gidx=3 \
        1>/tmp/logs/launcher_${i}.log 2>&1 &
