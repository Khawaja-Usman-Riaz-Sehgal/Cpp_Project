cmake_minimum_required(VERSION 3.16.3)
project(Project_Cpp)



#include_directories(${CMAKE_SOURCE_DIR}/include)

find_package(Threads REQUIRED)

file(GLOB SOURCES_BENCHMARKS ${CMAKE_SOURCE_DIR}/benchmarks/*.cpp)

include_directories(${CMAKE_SOURCE_DIR}/third_party/benchmark/include/)

#file(GLOB SOURCES_src ${CMAKE_SOURCE_DIR}/src/*.cpp)

add_executable(MyTarget ${SOURCES_BENCHMARKS} main.cpp)
#target_link_libraries(MyTarget benchmark Threads::Threads)
target_link_libraries(MyTarget ${CMAKE_THREAD_LIBS_INIT})
target_link_libraries(MyTarget benchmark)
target_link_libraries(MyTarget out1)
