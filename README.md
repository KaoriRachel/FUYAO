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

### Building & Running

- Within the `Experiments/bench/` directory, 
users can find scripts for building, running, and invoking.
