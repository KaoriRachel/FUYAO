MediaService
---

## Installation

**(Skip this step for ASPLOS'24 AE)**

Users need to install dependencies and set up external storage services.
Please refer to [here](../../../02/README.md) for detailed instructions.

## Evaluation

### For Nightcore

#### Inject data into MongoDB (only execute once)

```shell
bash ./build_all.sh

# start Nightcore along with MediaService
# We implemented a function within MediaService 
# that is responsible for injecting movie data into MongoDB.
bash ./start_all_nightcore.sh

# Inject data
python register_movieid.py

# Stop all processes
bash stop_all.sh
```

#### Measure the latency under a specified QPS

```shell
# start nightcore along with MediaService
bash ./start_all_nightcore.sh

# set qps=10, uses can also choose 50, 100, 200, 500, 600, 800, ...
# if the qps is high, recommend to execute the script on another node (such as node-126)
bash ./invoke.sh 10

# We recommend killing all processes and restarting them 
# after completing a specified QPS measurement.
bash stop_all.sh

# clear data in MongoDB and Memcache
python clean.py
```

#### Results

```shell
...
#[Mean    =       16.639, StdDeviation   =        3.158]
#[Max     =       30.240, Total count    =          500]
#[Buckets =           27, SubBuckets     =         2048]
----------------------------------------------------------
  600 requests in 1.00m, 84.96KB read
Requests/sec:     10.00
Transfer/sec:      1.42KB
```

### For Fuyao

#### Measure the latency under a specified QPS

```shell
# start nightcore along with MediaService
bash ./start_all_fuyao.sh

# set qps=10, uses can also choose 50, 100, 200, 500, 600, 800, ...
# if the qps is high, recommend to execute the script on another node (such as node-126)
bash ./invoke.sh 10

# We recommend killing all processes and restarting them 
# after completing a specified QPS measurement.
bash stop_all.sh

# clear data in MongoDB and Memcache
python clean.py
```

#### Results

```shell
...
#[Mean    =        7.291, StdDeviation   =        0.553]
#[Max     =        9.816, Total count    =          500]
#[Buckets =           27, SubBuckets     =         2048]
----------------------------------------------------------
  602 requests in 1.00m, 85.24KB read
Requests/sec:     10.03
Transfer/sec:      1.42KB
```