#!/bin/bash

absolute_path=/home/jyqi/Fuyao-benchmarks #project path

cmake -DCMAKE_BUILD_TYPE=Debug -DENABLE_ACROSS=OFF -G "Unix Makefiles" -DCMAKE_PREFIX_PATH=$HOME/local -S ${absolute_path} -B /tmp/host9
cmake --build /tmp/host9 --target gateway engine launcher exp06_back_end exp06_front_end -- -j 32

#ssh -p 4022 ubuntu@192.168.1.192 "cmake --build /tmp/dpu9 --target gateway agent -j 8"
