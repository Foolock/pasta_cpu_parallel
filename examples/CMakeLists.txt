set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/examples)
add_executable(manual ${PASTA_EXAMPLE_DIR}/manual.cpp)
add_executable(simple ${PASTA_EXAMPLE_DIR}/simple.cpp)

list(APPEND PASTA_EXAMPLES
  manual
  simple
)

find_package(Threads REQUIRED)
foreach(example IN LISTS PASTA_EXAMPLES) 
  target_include_directories(${example}
    PUBLIC 
    ${PROJECT_SOURCE_DIR}/pasta)

  # link external libaries
  target_link_libraries(${example}
    PRIVATE Threads::Threads
    PUBLIC pasta 
  )
endforeach()


