Function Chain
---


## For Nightcore

### Measure latency

```shell
bash ./build_all.sh

bash ./start_all_nightcore.sh

bash ./invoke_latency.sh

bash ./stop_all.sh
```

Here are the results:
```shell
chain_len: 2, payload: 512B
invoke a function chain of length 2 takes 802
invoke a function chain of length 2 takes 388
...
chain_len: 16, payload: 512B
invoke a function chain of length 16 takes 4568
invoke a function chain of length 16 takes 3168
...
chain_len: 32, payload: 512B
invoke a function chain of length 32 takes 7228
invoke a function chain of length 32 takes 5096
...
chain_len: 64, payload: 512B
invoke a function chain of length 64 takes 13837
invoke a function chain of length 64 takes 12994
...
chain_len: 128, payload: 512B
invoke a function chain of length 128 takes 29993
invoke a function chain of length 128 takes 20260
...
```

### Measure throughput

Suppose users want to measure the throughput of a FunctionChain 
with a length of 32 and around 130 total function instances.

- First, users need to adjust the number of function workers in "server_config.json". As follows:
```shell
  "Functions": [
    {
      "funcName": "exp06Frontend",
      "funcId": 1,
      "minWorkers": 4,
      "maxWorkers": 4
    },
    {
      "funcName": "exp06Backend",
      "funcId": 2,
      "minWorkers": 128,
      "maxWorkers": 128
    }
  ]
```

- Second, users must verify that the variable "chain_len" in the file "chain.lua" is set to 32.
- Then, users do as follows:
```shell
bash ./start_all_nightcore.sh

bash set_qps.sh 600

bash stop_all.sh
```

- Finally, the results are as follows:

```shell
....
#[Mean    =       67.424, StdDeviation   =        6.672]
#[Max     =      105.024, Total count    =         1186]
#[Buckets =           27, SubBuckets     =         2048]
----------------------------------------------------------
  2833 requests in 18.01s, 536.73KB read
Requests/sec:    157.30
Transfer/sec:     29.80KB
```

### Measure resource consumption

Users can measure the CPU resource usage under a specified QPS, using follows:

```shell
....
# set qps 100
bash ser_qps.sh 100 &

# record cpu usage
top -bn 10 | grep -E \ 'PID|gateway|engine|exp06' > q100
```

The results are as follows:
```shell
    PID USER      PR  NI    VIRT    RES    SHR S  %CPU  %MEM     TIME+ COMMAND
 469582 zyh       20   0 1238500  12400   9944 S   0.0   0.0   0:00.75 gateway
 982050 lgw       20   0  159180   7888   6896 S   0.0   0.0   0:00.32 gateway
 982128 lgw       20   0  172712  25900   8956 S   0.0   0.0   0:01.85 engine
 982363 lgw       20   0   15640  10656   9360 S   0.0   0.0   0:00.03 exp06_front_end
 982364 lgw       20   0   15640  10728   9432 S   0.0   0.0   0:00.03 exp06_front_end
 982365 lgw       20   0   15640  10696   9396 S   0.0   0.0   0:00.03 exp06_front_end
 982366 lgw       20   0   15640  10600   9304 S   0.0   0.0   0:00.03 exp06_front_end
 ....
```

## For Fuyao

### Measure latency

```shell
bash ./build_all.sh

bash ./start_all_fuyao.sh

bash ./invoke_latency.sh

bash ./stop_all.sh
```

Here are the results:

```shell
chain_len: 2, payload: 512B
invoke a function chain of length 2 takes 15107 # Handshake overhead, discard
invoke a function chain of length 2 takes 286  
invoke a function chain of length 2 takes 283
...
chain_len: 16, payload: 512B
invoke a function chain of length 16 takes 87978
invoke a function chain of length 16 takes 2300
invoke a function chain of length 16 takes 1956
....
chain_len: 32, payload: 512B
invoke a function chain of length 32 takes 101979
invoke a function chain of length 32 takes 4654
invoke a function chain of length 32 takes 4187
....
chain_len: 64, payload: 512B
invoke a function chain of length 64 takes 206153
invoke a function chain of length 64 takes 11255
invoke a function chain of length 64 takes 7756
....
chain_len: 128, payload: 512B
invoke a function chain of length 128 takes 414309
invoke a function chain of length 128 takes 18352
invoke a function chain of length 128 takes 15645
....
```

### Measure throughput and resource consumption

like Nightcore.