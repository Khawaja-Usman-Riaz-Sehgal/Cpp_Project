cmake_minimum_required(VERSION 3.16.3)
project(Project_Cpp)



include_directories(${CMAKE_SOURCE_DIR}/include)

#find_package(Threads REQUIRED)
find_package(benchmark REQUIRED)
#link_directories(${Threads_LIBRARY})

include_directories(${CMAKE_SOURCE_DIR}/third_party/benchmark/include)

file(GLOB SOURCES_src ${CMAKE_SOURCE_DIR}/src/*.cpp)

add_executable(MyTarget ${SOURCES_src} main.cpp)
target_link_libraries(MyTarget benchmark::benchmark pthread)
