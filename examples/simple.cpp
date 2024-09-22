#include "pasta.hpp"

int main() {

  pasta::PASTA partitioner("../benchmarks/des_perf.txt"); 

  if(!partitioner.has_cycle_before_partition()) {
    partitioner.run_graph_before_partition(1);
  }
  else {
    std::cerr << "input graph has cycle.\n";
    std::exit(EXIT_FAILURE);
  }

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();
  
  if(!partitioner.has_cycle_after_partition()) {
    partitioner.run_graph_after_partition(1);
  }
  else {
    std::cerr << "partitioned graph has cycle.\n";
    std::exit(EXIT_FAILURE);
  }

  // partitioner.dump_graph();

  return 0;
}
