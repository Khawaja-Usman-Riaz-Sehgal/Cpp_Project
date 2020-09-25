cmake_minimum_required(VERSION 3.16.3)
project(Project_Cpp)

find_package(Threads REQUIRED)
find_package(benchmark REQUIRED)
link_directories(${Threads_LIBRARY})


include_directories(third_party/benchmark/include)
add_executable(MyTarget main.cpp)
target_link_libraries(MyTarget benchmark::benchmark Threads::Threads)
