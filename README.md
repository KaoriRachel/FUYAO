# Fuyao-benchmarks

## Structure

<pre><code>
Fuyao-benchmarks
|---Experiments
    |---00 # measure the end-to-end latency of RDMA operations
    |---01 # compare different function communication method
    |---02 # real serverless application: media service
    |---03 # real serverless application: social network (not available)
    |---04 # worker python (only support IPC)
    |---05 # real serverless application: finra
    |---06 # application: long chain
    |---07 # real serverless application: ml pipeline
    |---08 # test: multiple fan out
    |---09 # (not available)
    |---10 # (not available)
    |---11 # FINRA
    |---12 # (not available)
    |---14 # (not available)
    |---bench # Scripts and configuration files for 01, 02, 06, 09, 11.
|---Fuyao
</code></pre>

## Installation

### Requirements

- machines equipped with BlueField DPUs

### Building

CLion recommended.

### Running

- **step01**: create a configuration file named `config.json`.:

```json
{
  "System": {
    "timeoutAsMsForPoller": 8000,
    "timeoutAsMsForDRC": 60000,
    "pollTimeInternalAsUs": 10,
    "memoryRegionSize": 1048576,
    "messageSizeOfFabric": 1024
  },
  "Gateway": {
    "gatewayIP": "192.168.1.126",
    "httpPort": 8082,
    "grpcPort": 50012,
    "engineConnPort": 10012,
    "numIOWorkers": 1,
    "listenBacklog": 64
  },
  "Engines": [
    {
      "guid": 101,
      "engineIP": "192.168.1.126",
      "agentConnPort": 10020,
      "engineTCPPort": -1,
      "numIOWorkers": 1,
      "gatewayConnPerWorker": 2,
      "rootPathForIPC": "/dev/shm/ipc2",
      "deviceName": "mlx5_0",
      "devicePort": 1,
      "deviceGidIndex": 3
    },
    {}
  ],
  "Agents": [
    {
      "guid": 201,
      "deviceName": "mlx5_2",
      "devicePort": 1,
      "deviceGidIndex": 2,
      "numIOWorkers": 1,
      "BindEngineGuid": 101
    },
    {}
  ],
  "Functions": [
    {
      "funcName": "UniqueIdService",
      "funcId": 1,
      "minWorkers": 1,
      "maxWorkers": 24
    },
    {}
  ]
}
```

- **step02**, start `gateway` with the arguments

``` 
--config_file=$REPLACE_YOUR_CONFIG_FILE_PATH/config.json
```

- **step03**, start `engine` with the arguments

``` 
--config_file=$REPLACE_YOUR_CONFIG_FILE_PATH/config.json
--guid=$REPLACE_ENGINE_GUID
```

- **step04**, start `agent` with the arguments

``` 
--config_file=$REPLACE_YOUR_CONFIG_FILE_PATH/config.json
--guid=$REPLACE_AGENT_GUID
```

- **step05**, start `launcher` with the arguments

``` 
--func_id=$REPALCE_FUNC_ID
--fprocess_mode=$REPALCE_PROCESS_MODE
--fprocess=$REPLACE_EXECUTABLE_FILE_PATH
--fprocess_output_dir=$REPLACE_YOUR_OUTPUR_DIR
--root_path_for_ipc=$REPLACE_ROOT_PATH_FOR_IPC
--device_name=$REPLACE_RDMA_DEVICE_NAME
--device_port=$REPLACE_RDMA_DEVICE_PORT
--device_gidx=$REPLACE_RDMA_GID_INDEX
```