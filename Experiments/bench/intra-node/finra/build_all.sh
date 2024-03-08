#!/bin/bash

absolute_path=/home/lgw/Fuyao-benchmarks #project path

ssh -p 22 lgw@192.168.1.129 "cmake -DCMAKE_BUILD_TYPE=Debug -DENABLE_ACROSS=OFF -G \"CodeBlocks - Unix Makefiles\" -S ${absolute_path} -B /tmp/host9; \
cmake --build /tmp/host9 --target gateway engine exp11_run_audit exp11_margin_balance launcher -- -j 32"
