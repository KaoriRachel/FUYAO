#!/bin/bash

absolute_path=/home/lgw/Fuyao-benchmarks #project path

# precondition
ssh -p 22 lgw@192.168.1.129 "cmake -DCMAKE_BUILD_TYPE=Debug -G \"CodeBlocks - Unix Makefiles\" -S ${absolute_path} -B /tmp/host9; \
cmake --build /tmp/host9 --target gateway engine exp01_fn_a exp01_fn_b exp01_fn_c exp01_fn_d exp01_fn_e exp01_fn_f -- -j 16"
