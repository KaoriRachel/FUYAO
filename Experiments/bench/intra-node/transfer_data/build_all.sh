#!/bin/bash

absolute_path=/home/jyqi/Fuyao-benchmarks #project path

# precondition
cmake -DCMAKE_BUILD_TYPE=Debug -G "Unix Makefiles" -DCMAKE_PREFIX_PATH=$HOME/local -S ${absolute_path} -B /tmp/host9
cmake --build /tmp/host9 --target gateway engine exp01_fn_a exp01_fn_b exp01_fn_c exp01_fn_d exp01_fn_e exp01_fn_f -- -j 16
