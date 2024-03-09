#!/bin/bash

# build on DPU-126
ssh -p 22 ubuntu@192.168.1.198 "rm -rf /tmp/dpu6; cmake -DCMAKE_BUILD_TYPE=Debug  -S /home/ubuntu/lgw/Fuyao-benchmarks/Fuyao -B /tmp/dpu6; \
cmake --build /tmp/dpu6 --target agent -- -j 8"

# build on DPU-129
ssh -p 22 ubuntu@192.168.1.199 "cmake -DCMAKE_BUILD_TYPE=Debug  -S /home/ubuntu/lgw/Fuyao-benchmarks/Fuyao -B /tmp/dpu9; \
cmake --build /tmp/dpu9 --target agent -- -j 8"

# build on Host-126
ssh -p 22 lgw@192.168.1.126 "cmake -DCMAKE_BUILD_TYPE=Debug -S /home/lgw/Fuyao-benchmarks -B /tmp/host6; \
cmake --build /tmp/host6 --target gateway engine launcher exp01_fn_a exp01_fn_b exp01_fn_c exp01_fn_d exp01_fn_e exp01_fn_f -- -j 16"

# build on Host-129
ssh -p 22 lgw@192.168.1.129 "cmake -DCMAKE_BUILD_TYPE=Debug -S /home/lgw/Fuyao-benchmarks -B /tmp/host9; \
cmake --build /tmp/host9 --target gateway engine launcher exp01_fn_a exp01_fn_b exp01_fn_c exp01_fn_d exp01_fn_e exp01_fn_f -- -j 16"