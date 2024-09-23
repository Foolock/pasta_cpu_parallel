#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <doctest.h>
#include "pasta.hpp"

TEST_CASE("simple" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/simple.txt"); 

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();
  
  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("c17" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/c17.txt"); 

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();
  
  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("c432" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/c432.txt"); 

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();
  
  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("c499" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/c499.txt"); 

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();
  
  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("c880" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/c880.txt");

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();

  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("c1355" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/c1355.txt"); 

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();
  
  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("c1908" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/c1908.txt");

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();

  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("c2670" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/c2670.txt");

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();

  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("c3540" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/c3540.txt");

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();

  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("c5315" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/c5315.txt");

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();

  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("c6288" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/c6288.txt"); 

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();
  
  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("c7522" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/c7522.txt");

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();

  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("s27" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/s27.txt");

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();

  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("s344" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/s344.txt");

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();

  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("s349" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/s349.txt"); 

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();
  
  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("s400" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/s400.txt"); 

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();
  
  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("s510" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/s510.txt");

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();

  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("s1196" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/s1196.txt"); 

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();
  
  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("s1494" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/s1494.txt"); 

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();
  
  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("ac97_ctrl" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/ac97_ctrl.txt");

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();

  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("aes_core" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/aes_core.txt");

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();

  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("tv80" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/tv80.txt");

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();

  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("wb_dma" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/wb_dma.txt");

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();

  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("usb_phy_ispd" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/usb_phy_ispd.txt");

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();

  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("des_perf" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/des_perf.txt");

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();

  REQUIRE(partitioner.has_cycle_after_partition() == false);
}

TEST_CASE("vga_lcd" * doctest::timeout(300)) {

  pasta::PASTA partitioner("../../benchmarks/vga_lcd.txt");

  REQUIRE(partitioner.has_cycle_before_partition() == false);

  partitioner.set_partition_size(10);
  partitioner.partition_c_pasta();

  REQUIRE(partitioner.has_cycle_after_partition() == false);
}




















