cmake_minimum_required(VERSION 3.10)
project(Project_Cpp)

#set(CMAKE_BUILD_TYPE DEBUG CMAKE_CXX_FLAGS "-O3" )

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "-std=c++0x -Wall")
set(CMAKE_BUILD_TYPE Release)
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
set( CMAKE_CXX_FLAGS_RELEASE        "-O3 -DNDEBUG" )

include_directories(include)

add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(test)
add_subdirectory(third_party/googletest)
set(BENCHMARK_ENABLE_GTEST_TESTS OFF)
add_subdirectory(third_party/benchmark/)


add_subdirectory(benchmarks)