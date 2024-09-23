#include "pasta.hpp"

int main() {

  pasta::PASTA partitioner; 

  pasta::Node* A = partitioner.insert_node("A");
  pasta::Node* B = partitioner.insert_node("B");
  pasta::Node* C = partitioner.insert_node("C");

  pasta::Edge* AB = partitioner.insert_edge(A, B);
  pasta::Edge* AC = partitioner.insert_edge(B, C);

  if(partitioner.has_cycle_before_partition()) {
    std::cout << "input graph has cycle.\n";
  }
  else {
    std::cout << "no cycle detected.\n";
  }

  return 0;
}
