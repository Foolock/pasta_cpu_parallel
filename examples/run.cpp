#include "pasta.hpp"

int main(int argc, char* argv[]) {

  if(argc != 4) {
    std::cerr << "usage: ./example/run matrix_size partition_size circuit_file\n";
    std::exit(EXIT_FAILURE);
  }

  int matrix_size = std::atoi(argv[1]);
  int partition_size = std::atoi(argv[2]);
  std::string circuit_file = argv[3];

  pasta::PASTA partitioner(circuit_file); 

  std::cout << "num_nodes: " << partitioner.num_nodes() << "\n";
  std::cout << "num_edges: " << partitioner.num_edges() << "\n";
  std::cout << "average_degree: " << partitioner.num_edges() * 1.0 / (partitioner.num_nodes() * 1.0) << "\n";

  partitioner.set_partition_size(partition_size);
  partitioner.partition_c_pasta();
  
  if(!partitioner.has_cycle_after_partition()) {
    partitioner.run_graph_after_partition(matrix_size);
  }
  else {
    std::cerr << "partitioned graph has cycle.\n";
    std::exit(EXIT_FAILURE);
  }

  // partitioner.dump_graph();

  return 0;
}
