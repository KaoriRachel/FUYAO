# EXP01 : MediaService

## Installation
```shell
# related framework
/usr/bin/cmake --build /tmp/lumine-benchmarks --target gateway engine agent launcher worker_cpp worker_python -- -j 8

# related exp01
/usr/bin/cmake --build /tmp/lumine-benchmarks --target exp01_fn_a exp01_fn_b exp01_fn_c exp01_fn_d exp01_fn_e exp01_fn_f -- -j 8
```


## Evaluation

```
payloads=("64B" "256B" "512B" "1KB" "512KB" "1MB" "512MB" "1GB")

# shellcheck disable=SC2068
for payload in ${payloads[@]}; do
  # shellcheck disable=SC2034
 # for i in {1..5}; do
    curl -X POST -d $payload http://192.168.1.126:8082/function/exp01Fna
    #sleep 1s
  #done
done
```

## Others

The scripts in dir 01 is a experiments to test workflow in difference invoke method, which invoke a workflow c->e with a payload.