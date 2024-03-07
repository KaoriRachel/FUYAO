#!/bin/bash

method=IPC
#method=DRC_OVER_IPC
#method=DRC_OVER_Fabric

absolute_path="/home/lgw/Fuyao-benchmarks"

host_config_path=${absolute_path}"/Experiments/bench/intra-node/media_service/service_config.json"
#dpu_config_path="/home/ubuntu/lgw/Fuyao-benchmarks/Experiments/bench/02_media_service/service_config.json"

# precondition
rm_dir="rm -rf /tmp/logs; mkdir /tmp/logs"

# start gateway on DPU
#ssh -p 4022 ubuntu@192.168.1.192 \
#  " ${rm_dir}; /tmp/dpu9/Lumine/gateway/gateway \
#  --config_file=${dpu_config_path} \
#  1>/tmp/logs/gateway.log 2>&1 &"

# start gateway on Host-129(ip address: 192.168.1.129 or 192.168.1.192)
ssh -p 22 lgw@192.168.1.129 \
  " ${rm_dir}; /tmp/host9/Fuyao/gateway/gateway \
  --config_file=${host_config_path} \
  1>/tmp/logs/gateway.log 2>&1 &"

sleep 1

## start engine
ssh -p 22 lgw@192.168.1.129 \
  "/tmp/host9/Fuyao/engine/engine \
  --config_file=${host_config_path} \
  --guid=102 \
  1>/tmp/logs/engine.log 2>&1 &"

sleep 1

# start launcher
function run_launcher() {
  ssh -p 22 lgw@${1} \
    "export MessagePathingMethod=${method}; \
    export CONFIG_PATH=${host_config_path}; \
    export LUMINE_GATEWAY_ADDR=192.168.1.129; \
    export LUMINE_GATEWAY_PORT=8084; \
    ${2}/Fuyao/launcher/launcher \
        --func_id=${3} \
        --fprocess_mode=cpp \
        --fprocess=${4} \
        --fprocess_output_dir=/tmp/logs \
        --root_path_for_ipc=/dev/shm/ipc2 \
        --device_name=${5} \
        --device_port=${6} \
        --device_gidx=${7} \
        1>/tmp/logs/launcher_${3}.log 2>&1 &"
}

## stage 0
run_launcher "192.168.1.129" "/tmp/host9" "35" "/tmp/host9/experiments/exp02/exp02_media_service/exp02_compose_review_0" "mlx5_0" "1" "3"

## stage 1
run_launcher "192.168.1.129" "/tmp/host9" "20" "/tmp/host9/experiments/exp02/exp02_media_service/exp02_upload_movie_id_1" "mlx5_0" "1" "3"
run_launcher "192.168.1.129" "/tmp/host9" "21" "/tmp/host9/experiments/exp02/exp02_media_service/exp02_upload_text_1" "mlx5_0" "1" "3"
run_launcher "192.168.1.129" "/tmp/host9" "22" "/tmp/host9/experiments/exp02/exp02_media_service/exp02_upload_unique_id_1" "mlx5_0" "1" "3"

## stage 2
run_launcher "192.168.1.129" "/tmp/host9" "24" "/tmp/host9/experiments/exp02/exp02_media_service/exp02_upload_rating_2" "mlx5_0" "1" "3"

## stage 3
run_launcher "192.168.1.129" "/tmp/host9" "25" "/tmp/host9/experiments/exp02/exp02_media_service/exp02_upload_movie_ld_3" "mlx5_0" "1" "3"
run_launcher "192.168.1.129" "/tmp/host9" "26" "/tmp/host9/experiments/exp02/exp02_media_service/exp02_upload_rating_3" "mlx5_0" "1" "3"
run_launcher "192.168.1.129" "/tmp/host9" "27" "/tmp/host9/experiments/exp02/exp02_media_service/exp02_upload_text_3" "mlx5_0" "1" "3"
run_launcher "192.168.1.129" "/tmp/host9" "28" "/tmp/host9/experiments/exp02/exp02_media_service/exp02_upload_unique_id_3" "mlx5_0" "1" "3"

## stage 4
run_launcher "192.168.1.129" "/tmp/host9" "32" "/tmp/host9/experiments/exp02/exp02_media_service/exp02_store_review_4" "mlx5_0" "1" "3"


## Inject data into MongoDB
run_launcher "192.168.1.129" "/tmp/host9" "34" "/tmp/host9/experiments/exp02/exp02_media_service/exp02_register_movie_id" "mlx5_0" "1" "3"
