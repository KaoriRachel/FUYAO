#!/bin/bash

# build on Host-126
ssh -p 22 lgw@192.168.1.126 "cmake -DCMAKE_BUILD_TYPE=Debug -S /home/lgw/Fuyao-benchmarks -B /tmp/host6; \
cmake --build /tmp/host6 --target gateway engine launcher exp09_end exp09_start_for_media exp09_start_for_finra exp09_start_for_chain -- -j 16"
