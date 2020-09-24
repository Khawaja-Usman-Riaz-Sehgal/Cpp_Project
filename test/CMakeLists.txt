
cmake_minimum_required(VERSION 3.16.3)
project(Project_Cpp)
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
file(GLOB Sources_src ${CMAKE_SOURCE_DIR}/src/*.cpp)
add_executable(runTests ${Sources_src} test.cpp)
#add_executable(runTests ../src/Containers.cpp test.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)