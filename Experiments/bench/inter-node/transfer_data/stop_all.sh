#!/bin/bash

# shellcheck disable=SC2046
# shellcheck disable=SC2006
ssh ubuntu@192.168.200.3 "kill -9 \$(ps x | grep '/tmp/dpu6' | grep -v grep | awk '{print \$1}')"
ssh ubuntu@192.168.200.4 "kill -9 \$(ps x | grep '/tmp/dpu9' | grep -v grep | awk '{print \$1}')"
ssh jyqi@192.168.172.5 "kill -9 \$(ps x | grep '/tmp/host9' | grep -v grep | awk '{print \$1}')"
ssh jyqi@192.168.172.6 "kill -9 \$(ps x | grep '/tmp/host9' | grep -v grep | awk '{print \$1}')"
