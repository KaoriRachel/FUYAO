#!/bin/bash

WRK_BIN=wrk
WRK_SCRIPT=./compose-review.lua
URL=http://192.168.1.126:8084


qps=$1
$WRK_BIN -d60s -c10 -t5 -R${qps} --u_latency -s $WRK_SCRIPT $URL