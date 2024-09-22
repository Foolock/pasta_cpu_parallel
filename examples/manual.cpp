#include "pasta.hpp"

int main() {

  pasta::PASTA partitioner; 

  auto A = partitioner.insert_node("A");
  auto B = partitioner.insert_node("B");
  auto C = partitioner.insert_node("C");

  auto AB = partitioner.insert_edge(A, B);
  auto AC = partitioner.insert_edge(A, C);

  if(partitioner.has_cycle_before_partition()) {
    std::cout << "input graph has cycle.\n";
  }
  else {
    std::cout << "no cycle detected.\n";
  }

  return 0;
}
