#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <doctest.h>
#include "pasta.hpp"

// --------------------------------------------------------
// Testcase: insert_node 
// --------------------------------------------------------
TEST_CASE("insert_node" * doctest::timeout(300)) {

  pasta::PASTA partitioner;

  auto A = partitioner.insert_node();
  
  REQUIRE(partitioner.num_nodes() == 1);

  auto B = partitioner.insert_node();

  REQUIRE(partitioner.num_nodes() == 2);

}

// --------------------------------------------------------
// Testcase: insert_edge 
// --------------------------------------------------------
TEST_CASE("insert_edge" * doctest::timeout(300)) {

  pasta::PASTA partitioner;

  auto A = partitioner.insert_node();
  auto B = partitioner.insert_node();
  auto C = partitioner.insert_node();
  auto D = partitioner.insert_node();
  auto E = partitioner.insert_node();

  auto AC = partitioner.insert_edge(A, C);
  auto BC = partitioner.insert_edge(B, C);
  auto CD = partitioner.insert_edge(C, D);
  auto CE = partitioner.insert_edge(C, E);

  REQUIRE(partitioner.num_nodes() == 5);
  REQUIRE(A->num_fanouts() == 1);
  REQUIRE(A->num_fanins() == 0);
  REQUIRE(B->num_fanouts() == 1);
  REQUIRE(B->num_fanins() == 0);
  REQUIRE(C->num_fanouts() == 2);
  REQUIRE(C->num_fanins() == 2);
  REQUIRE(D->num_fanouts() == 0);
  REQUIRE(D->num_fanins() == 1);
  REQUIRE(E->num_fanouts() == 0);
  REQUIRE(E->num_fanins() == 1);

}
































