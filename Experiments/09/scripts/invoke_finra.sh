#!/bin/bash

WRK_BIN=/usr/bin/wrk
WRK_SCRIPT=./finra.lua
URL=http://192.168.1.129:8084/function/exp09StartFinra

# runs a benchmark for 3 seconds, using 5 threads, keeping 20 HTTP connections open
# and a constant throughput of 20 requests per second (total, across all connections combined).
$WRK_BIN -d60s -c1 -t1 -R1 --u_latency -s $WRK_SCRIPT $URL