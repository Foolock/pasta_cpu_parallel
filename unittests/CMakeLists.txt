enable_testing()

include(${PASTA_3RD_PARTY_DIR}/doctest/doctest.cmake)

list(APPEND PASTA_UNITTESTS 
  check_ops
)

string(FIND '${CMAKE_CXX_FLAGS}' "-fsanitize" sanitize)

find_package(Threads REQUIRED)
foreach(unittest IN LISTS PASTA_UNITTESTS)
  set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/unittests)
  add_executable(${unittest} ${unittest}.cpp)
  target_link_libraries(${unittest} 
    PRIVATE Threads::Threads
    PUBLIC pasta)
  target_include_directories(${unittest} 
    PRIVATE 
    ${PASTA_3RD_PARTY_DIR}/doctest
    PUBLIC
    ${PASTA_3RD_PARTY_DIR}/taskflow
    ${PROJECT_SOURCE_DIR}/pasta
  )
  doctest_discover_tests(${unittest})
endforeach()



