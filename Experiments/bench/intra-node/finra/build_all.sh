#!/bin/bash

absolute_path=/home/jyqi/Fuyao-benchmarks #project path

cmake -DCMAKE_BUILD_TYPE=Debug -DENABLE_ACROSS=OFF -G "Unix Makefiles" -DCMAKE_PREFIX_PATH=$HOME/local -S ${absolute_path} -B /tmp/host9
cmake --build /tmp/host9 --target gateway engine exp11_run_audit exp11_margin_balance launcher -- -j 32
