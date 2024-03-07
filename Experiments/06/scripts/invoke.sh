#!/bin/bash

WRK_BIN=/usr/bin/wrk
WRK_SCRIPT=../wrk2_scripts/exp-01-ce.lua
URL=http://127.0.0.1:8084/function/exp06Frontend

# runs a benchmark for 3 seconds, using 5 threads, keeping 20 HTTP connections open
# and a constant throughput of 20 requests per second (total, across all connections combined).
$WRK_BIN -d20s -c2 -t1 -R10 --u_latency -s $WRK_SCRIPT $URL