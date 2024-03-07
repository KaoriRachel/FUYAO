#!/bin/bash

WRK_BIN=/usr/bin/wrk
WRK_SCRIPT=./compose-review.lua
URL=http://192.168.1.129:8084/function/exp02ComposeReview

qps=$1

if [ ${qps} -lt 800 ]; then
  $WRK_BIN -d60s -c20 -t10 -R${qps} --u_latency -s $WRK_SCRIPT $URL
else
  $WRK_BIN -d60s -c160 -t40 -R${qps} --u_latency -s $WRK_SCRIPT $URL
fi