#!/bin/bash

#curl -X POST -d "1 16B" http://192.168.1.198:8084/function/exp06Frontend

fanout_num=20

for ((i=1;i<=10;i++)); do
  curl -X POST -d "{\"req_id\":${i},\"fanout_num\":${fanout_num}}" http://192.168.1.129:8084/function/exp11MarginBalance
  sleep 0.5
done
