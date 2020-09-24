cmake_minimum_required(VERSION 3.10)
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

file(GLOB TESTS ${CMAKE_SOURCE_DIR}/test/*.cpp)

# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests ${TESTS})
target_link_libraries(runTests out1)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
