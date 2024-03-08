#!/bin/bash

WRK_BIN=/usr/bin/wrk
WRK_SCRIPT=./compose-review.lua
URL=http://192.168.1.129:8084/function/exp02ComposeReview

qps=$1


$WRK_BIN -d60s -c10 -t5 -R${qps} --u_latency -s $WRK_SCRIPT $URL