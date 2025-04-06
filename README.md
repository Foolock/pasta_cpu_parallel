# pasta_cpu_parallel

Made a cpu-only version so we can run it on mac/ubuntu without involving GPU.

```bash

~$ git clone https://github.com/Foolock/pasta_cpu_parallel.git
~$ cd pasta_cpu_parallel
~$ mkdir build
~$ cd build
~$ cmake ../
~$ make
~$ ./example/run matrix_size partition_size circuit_file

```

# Note
1. Our partitioner takes 3 inputs, `partition_size`, `matrix_size`, `circuit_file`.
2. `partition_size` is used to define the maximum number of tasks within one partition.
3. `circuit_file` (describing the structure of a circuit in the form of a dependency acyclic graph) are stored in /benchmarks. 
4. `matrix_size` is used to define how much workload each task in the task graph has. Each task in the graph is doing matrix multiplication with a problemn size of matrix_size^3.


# An example run

```bash

~$ # after you make the project and goes into the /build directory
~$ ./examples/run 8 20 ../benchmarks/des_perf.txt 

```

And it should print out the following information

```
num_nodes: 303690
num_edges: 387291
average_degree: 1.27528
partitioned_taskflow_runtime: 8324 us
```
