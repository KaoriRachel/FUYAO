#!/bin/bash

WRK_BIN=/usr/bin/wrk
WRK_SCRIPT=./finra.lua

URL=http://192.168.1.126:8084/function/exp09StartFinra
#URL=http://192.168.1.126:8084/function/exp11MarginBalance

# runs a benchmark for 3 seconds, using 5 threads, keeping 20 HTTP connections open
# and a constant throughput of 20 requests per second (total, across all connections combined).

# For QPS = 400

$WRK_BIN -d50s -c100 -t20 -R400 --u_latency -s $WRK_SCRIPT $URL

#$WRK_BIN -d60s -c100 -t20 -R1 --u_latency -s $WRK_SCRIPT $URL

#$WRK_BIN -d10s -c100 -t20 -R600 --u_latency -s $WRK_SCRIPT $URL

#$WRK_BIN -d10s -c100 -t20 -R600 --u_latency -s $WRK_SCRIPT $URL


#$WRK_BIN -d90s -c40 -t20 -R200 --u_latency -s $WRK_SCRIPT $URL
