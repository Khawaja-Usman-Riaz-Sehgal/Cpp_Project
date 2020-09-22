
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
include_directories(../src/)
include_directories(../app/)

# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests ../src/Containers.cpp test.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)