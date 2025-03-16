#!/bin/bash


for((i=1;i<=100;i++)); do
  # test Nightcore's HTTP method
  curl -X POST -d "16B" http://192.168.172.5:8084/function/exp01Fna

  # test Fuyao DRC_OVER_Fabric
  curl -X POST -d "16B" http://192.168.172.5:8084/function/exp01Fnf
done

