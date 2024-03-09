Transfer Data
---

Let's deploy Fuyao and Nightcore across nodes, 
utilizing node-129 and node-126, 
each equipped with NVIDIA BlueField DPU. 
We'll compare Nightcore's HTTP method (via Gateway) with Fuyao's DTC_over_Fabric.


User can do as follows:
```shell
# build the project on Host-126 and Host-129, along with their respective DPUs.
bash ./build_all.sh

# start project on Hosts and DPUs
bash ./start_all.sh

bash ./invoke.sh

bash ./stop_all.sh
```

Results:
```shell
Via Gateway: interaction latency : 2452
Via DRC_OVER_Fabric: interaction latency : 49008 # handshake overhead
Via Gateway: interaction latency : 1422
Via DRC_OVER_Fabric: interaction latency : 310
Via Gateway: interaction latency : 1179
Via DRC_OVER_Fabric: interaction latency : 295
Via Gateway: interaction latency : 1005
Via DRC_OVER_Fabric: interaction latency : 306
Via Gateway: interaction latency : 1024
Via DRC_OVER_Fabric: interaction latency : 297
Via Gateway: interaction latency : 1056
Via DRC_OVER_Fabric: interaction latency : 282
Via Gateway: interaction latency : 1358
Via DRC_OVER_Fabric: interaction latency : 290
Via Gateway: interaction latency : 1159
Via DRC_OVER_Fabric: interaction latency : 292
Via Gateway: interaction latency : 1127
Via DRC_OVER_Fabric: interaction latency : 288
Via Gateway: interaction latency : 1034
Via DRC_OVER_Fabric: interaction latency : 288
...
```