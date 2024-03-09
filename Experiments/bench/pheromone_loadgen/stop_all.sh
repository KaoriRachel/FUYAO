#!/bin/bash

ssh -p 22 lgw@192.168.1.126 "kill -9 \$(ps x | grep '/tmp/host6' | grep -v grep | awk '{print \$1}')"

