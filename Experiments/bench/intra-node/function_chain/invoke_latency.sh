#!/bin/bash

#curl -X POST -d "1 16B" http://192.168.1.198:8084/function/exp06Frontend

chain_lens=(2 16 32 64 128)
#chain_lens=(128 64 32 16 2)
#payloads=("512B" "1KB" "512KB" "1MB")
#payloads=("512B" "512KB")
payloads=("512B")


# shellcheck disable=SC2068
for chain_len in ${chain_lens[@]}; do
  for payload in ${payloads[@]}; do
    echo "chain_len: ${chain_len}, payload: ${payload}"
    for i in {1..50}; do
      curl -X POST -d "${chain_len} ${payload}" http://192.168.1.129:8084/function/exp06Frontend
      sleep 0.5
    done
  done
done
