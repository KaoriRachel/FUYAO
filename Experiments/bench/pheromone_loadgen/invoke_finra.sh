#!/bin/bash

WRK_BIN=/usr/bin/wrk
WRK_SCRIPT=./finra.lua

URL=http://192.168.1.126:8084/function/exp09StartFinra

qps=$1
$WRK_BIN -d50s -c10 -t5 -R${qps} --u_latency -s $WRK_SCRIPT $URL