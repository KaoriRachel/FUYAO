Transfer Data
---

Let's compare Nightcore's IPC method with Fuyao's DTC_over_IPC (which we call DRC_OVER_IPC in our program).

User can do as follows:
```shell
bash ./build_all.sh

bash ./start_all.sh

bash ./invoke.sh

bash ./stop_all.sh
```

Results:
```shell
Via IPC: interaction latency : 753
Via DRC_OVER_IPC: interaction latency : 275
Via IPC: interaction latency : 300
Via DRC_OVER_IPC: interaction latency : 171
Via IPC: interaction latency : 319
Via DRC_OVER_IPC: interaction latency : 143
Via IPC: interaction latency : 290
Via DRC_OVER_IPC: interaction latency : 175
Via IPC: interaction latency : 279
Via DRC_OVER_IPC: interaction latency : 175
Via IPC: interaction latency : 244
Via DRC_OVER_IPC: interaction latency : 169
Via IPC: interaction latency : 282
Via DRC_OVER_IPC: interaction latency : 141
...
```