# EXP08

## Run

```shell

cd scripts/
bash start_all.sh

```

## Invoke

```shell
curl -X POST -d 4  http://127.0.0.1:8084/function/exp08Upstream
```

Note that: 4 means starting 4 threads that invoke downstream function