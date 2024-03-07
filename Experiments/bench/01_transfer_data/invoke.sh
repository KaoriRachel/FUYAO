#!/bin/bash

# test gateway
curl -X POST -d "16B" http://192.168.1.198:8084/function/exp01Fna

# test IPC
curl -X POST -d "16B" http://192.168.1.198:8084/function/exp01Fnb

# test DRC_OVER_IPC
curl -X POST -d "16B" http://192.168.1.198:8084/function/exp01Fnc

# test Fabric
curl -X POST -d "16B" http://192.168.1.198:8084/function/exp01Fnd

# test DRC_OVER_Fabric
curl -X POST -d "16B" http://192.168.1.198:8084/function/exp01Fnf