#!/bin/bash

WRK_BIN=/usr/bin/wrk
WRK_SCRIPT=./wrk.lua
URL=http://192.168.1.126:8082/function/exp10Fna

# runs a benchmark for 3 seconds, using 5 threads, keeping 20 HTTP connections open
# and a constant throughput of 20 requests per second (total, across all connections combined).
$WRK_BIN -d30s -c100 -t10 -R500 --u_latency -s $WRK_SCRIPT $URL