#!/bin/bash

ssh -p 22 lgw@192.168.1.192 "cmake --build /tmp/host9 --target gateway engine exp11_run_audit exp11_margin_balance launcher -- -j 32"
