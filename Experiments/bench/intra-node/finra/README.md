FINRA
---

Let's consider FINRA with a fan-out degree of 20 as an example.

## For Nightcore

### Measure latency

```shell
bash ./build_all.sh

bash ./start_all_nightcore.sh

bash ./invoke_latency.sh

bash ./stop_all.sh
```

Please find below the results from the log files located in the directory "/tmp/logs":
```shell
req_id = 1, token = 21076 us
req_id = 2, token = 16013 us
req_id = 3, token = 17004 us
req_id = 4, token = 15912 us
req_id = 5, token = 15831 us
req_id = 6, token = 16638 us
req_id = 7, token = 16557 us
req_id = 8, token = 14529 us
req_id = 9, token = 15498 us
req_id = 10, token = 15245 us
...
```

### Measure throughput

```shell
bash ./start_all_nightcore.sh

bash set_qps.sh 1000

bash stop_all.sh
```

results:
```shell
...
#[Mean    =       46.467, StdDeviation   =        8.026]
#[Max     =      113.920, Total count    =        10747]
#[Buckets =           27, SubBuckets     =         2048]
----------------------------------------------------------
  13403 requests in 1.00m, 2.17MB read
Requests/sec:    223.33
Transfer/sec:     37.08KB
```



### Measure resource consumption

Users can measure the CPU resource usage under a specified QPS=100, using follows:

```shell
bash ./start_all_nightcore.sh

# set qps 100
bash ser_qps.sh 100 &

# record cpu usage
top -bn 10 | grep -E \ 'PID|gateway|engine|exp11'
```

The results are as follows:
```shell
    PID USER      PR  NI    VIRT    RES    SHR S  %CPU  %MEM     TIME+ COMMAND
 369400 lgw       20   0  402200  36672   9040 S  70.4   0.0   0:11.09 engine
 369685 lgw       20   0 5915340  12308   9924 S  13.2   0.0   0:02.08 exp11_margin_ba
 369684 lgw       20   0 5915468  12428  10052 S  12.5   0.0   0:02.03 exp11_margin_ba
 369682 lgw       20   0 5915276  12124   9748 S  12.2   0.0   0:02.00 exp11_margin_ba
 369683 lgw       20   0 5915276  12428  10048 S  12.2   0.0   0:02.09 exp11_margin_ba
 369309 lgw       20   0  380520   7644   6924 S   4.9   0.0   0:00.79 gateway
 369537 lgw       20   0   16232  11124   9804 R   1.3   0.0   0:00.14 exp11_run_audit
 369560 lgw       20   0   16232  11316   9996 S   1.3   0.0   0:00.17 exp11_run_audit
 369561 lgw       20   0   16232  11316   9996 S   1.3   0.0   0:00.16 exp11_run_audit
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

Please find below the results from the log files located in the directory "/tmp/logs":
```shell
req_id = 1, token = 121715 us
req_id = 2, token = 1965 us
req_id = 3, token = 1842 us
req_id = 4, token = 1879 us
req_id = 5, token = 2080 us
req_id = 6, token = 1922 us
req_id = 7, token = 1915 us
req_id = 8, token = 1930 us
req_id = 9, token = 2038 us
req_id = 10, token = 1977 us
....
```

### Measure throughput

```shell
bash ./start_all_fuyao.sh

bash set_qps.sh 1000

bash stop_all.sh
```

results:
```shell
...
#[Mean    =        3.126, StdDeviation   =        1.023]
#[Max     =       47.200, Total count    =        48111]
#[Buckets =           27, SubBuckets     =         2048]
----------------------------------------------------------
  58126 requests in 1.00m, 9.42MB read
  Socket errors: connect 0, read 0, write 0, timeout 8
Requests/sec:    968.71
Transfer/sec:    160.82KB
```

### Measure resource consumption

```shell
bash ./start_all_fuyao.sh

# set qps 100
bash ser_qps.sh 100 &

# record cpu usage
top -bn 10 | grep -E \ 'PID|gateway|engine|exp11'
```

results:
```shell
    PID USER      PR  NI    VIRT    RES    SHR S  %CPU  %MEM     TIME+ COMMAND
 370966 lgw       20   0 5926028  23972  10104 S  17.8   0.0   0:02.30 exp11_margin_ba
 370964 lgw       20   0 5926156  23948  10056 S  16.8   0.0   0:02.20 exp11_margin_ba
 370965 lgw       20   0 5926028  24056  10176 S  15.8   0.0   0:02.36 exp11_margin_ba
 370593 lgw       20   0  380520   7656   6928 S   4.6   0.0   0:00.56 gateway
 370676 lgw       20   0  383248  12312   8940 S   3.6   0.0   0:00.61 engine
 370833 lgw       20   0   16908  12724   9820 S   1.6   0.0   0:00.17 exp11_run_audit
 370812 lgw       20   0   16908  12880   9984 S   1.3   0.0   0:00.17 exp11_run_audit
 370815 lgw       20   0   16908  12720   9824 S   1.3   0.0   0:00.18 exp11_run_audit
 370818 lgw       20   0   16908  12920  10020 S   1.3   0.0   0:00.19 exp11_run_audit
 370820 lgw       20   0   16908  12892   9988 S   1.3   0.0   0:00.18 exp11_run_audit
 370824 lgw       20   0   16908  12904   9996 S   1.3   0.0   0:00.18 exp11_run_audit
 370826 lgw       20   0   16908  12860   9956 S   1.3   0.0   0:00.16 exp11_run_audit
 370831 lgw       20   0   16908  12752   9860 S   1.3   0.0   0:00.16 exp11_run_audit
 370842 lgw       20   0   16908  12876   9976 S   1.3   0.0   0:00.17 exp11_run_audit
 370845 lgw       20   0   16908  12844   9944 S   1.3   0.0   0:00.18 exp11_run_audit
 370846 lgw       20   0   16908  12536   9628 S   1.3   0.0   0:00.19 exp11_run_audit
 370848 lgw       20   0   16908  12584   9680 S   1.3   0.0   0:00.18 exp11_run_audit
 ...
```