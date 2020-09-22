#include "../include/Containers.h"
#include <vector>
#include <gtest/gtest.h>


int main(int argc, char** argv) {
testing::InitGoogleTest(&argc, argv);
return RUN_ALL_TESTS();
}

TEST(Test_Squared, list) {
Containers c;
list <int> l;
l.push_back(1);
l.push_back(2);
l.push_back(3);
l.push_back(4);
c.set_sum(l);
    ASSERT_EQ(4,c.get_size());
    ASSERT_EQ(16, c.get_max());
    ASSERT_EQ(1, c.get_min());
    ASSERT_EQ(30, c.get_sum());
}

TEST(Test_Squared, vector) {
Containers c;
vector <int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
v.push_back(6);
c.set_sum(v);
    ASSERT_EQ(6, c.get_size());
    ASSERT_EQ(36, c.get_max());
    ASSERT_EQ(1, c.get_min());
    ASSERT_EQ(91, c.get_sum());
}


