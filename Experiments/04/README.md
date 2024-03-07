# EXP04

In this example, we define two function `exp04Foo` and `exp04Bar` in `service_config.json`. Bar implemented in python
will be invoked by external function call.
This example requires Python 3.7+ to run (we have tested Python 3.8.5).

## Installation

### Before you start

First, Your should build project `worker_python` to generate a dynamic link library in directory `faas`.
Then copy the directory `faas` to this directory.

### Build and Start

Start submodule with corresponding arguments in sequence.

You can refer to [here](../../README.md).

## Evaluation

Complete the preceding operations, run

```shell
curl -X POST -d "Hello" http://127.0.0.1:8082/function/exp04Foo
```

to invoke function Bar. Then you will see the output

```shell
From function Bar: hello, world
```
