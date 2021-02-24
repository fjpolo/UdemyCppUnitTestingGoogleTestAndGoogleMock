#include <gtest/gtest.h>
#include "../LibraryCode/LibraryCode.hpp"

TEST(TestSample, TestAddition){
    ASSERT_EQ(4, add(2,2));
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}