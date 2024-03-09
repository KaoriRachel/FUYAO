Pheromone LoadGen
---

**Challenge:**

The asynchronous invocation pattern of Pheromone poses difficulties in accurately measuring its throughput. 
Moreover, calling applications atop Pheromone requires a specialized client, 
further complicating the measurement process.

**Solution:**

To address these challenges, 
we have implemented a C++ Pheromone client, available in [pheromone_client.h](../../09/include/pheromone_client.h). 
Concurrently, we have developed functions atop Fuyao to serve as Pheromone's load generator.
Specifically, the start function is responsible for forwarding requests from wrk2. 
Upon completion, users can collect comprehensive completion statistics from log files, 
enabling them to effectively determine throughput.

**How to do?**

Take FunctionChain as an example:

```shell
bash ./build_all.sh

bash ./start_all.sh

bash invoke_chain.sh 10

bash ./stop_all.sh
```

