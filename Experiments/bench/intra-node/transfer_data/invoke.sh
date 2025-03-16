#!/bin/bash


for((i=1;i<=100;i++)); do
  # test Nightcore IPC
  curl -X POST -d "16B" http://192.168.172.5:8084/function/exp01Fnb

  # test Fuyao DRC_OVER_IPC
  curl -X POST -d "16B" http://192.168.172.5:8084/function/exp01Fnc
done

