cmake_minimum_required(VERSION 3.10)
project(Project_Cpp)

set(CMAKE_BUILD_TYPE DEBUG CMAKE_CXX_FLAGS "-O3" )

include_directories(include)

add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(test)
add_subdirectory(third_party/googletest)
set(BENCHMARK_ENABLE_GTEST_TESTS OFF)
add_subdirectory(third_party/benchmark)

add_subdirectory(benchmarks)