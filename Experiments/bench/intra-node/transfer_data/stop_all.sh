#!/bin/bash

# shellcheck disable=SC2046
# shellcheck disable=SC2006
kill -9 $(ps x | grep '/tmp/host9' | grep -v grep | awk '{print $1}')
