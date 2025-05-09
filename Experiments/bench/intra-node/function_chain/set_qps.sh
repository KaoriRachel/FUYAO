
WRK_BIN=/home/jyqi/local/bin/wrk
WRK_SCRIPT=./chain.lua

URL=http://192.168.172.5:8084/function/exp06Frontend

# runs a benchmark for 3 seconds, using 5 threads, keeping 20 HTTP connections open
# and a constant throughput of 20 requests per second (total, across all connections combined).

# For QPS = 400
qps=$1
$WRK_BIN -d40s -c10 -t5 -R${qps} --u_latency -s $WRK_SCRIPT $URL


#$WRK_BIN -d90s -c200 -t40 -R2600 --u_latency -s $WRK_SCRIPT $URL


#$WRK_BIN -d90s -c200 -t40 -R1000 --u_latency -s $WRK_SCRIPT $URL
