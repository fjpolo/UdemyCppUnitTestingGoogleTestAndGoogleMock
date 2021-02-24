#include <iostream>
#include <gtest/gtest.h>
#include "../LibraryCode/LibraryCode.hpp"

/**
 * TestCountPositives
 */
TEST(TestCountPositives, BasicTest){
    /*Arrange*/
    std::vector<int> inputVector{1, -2, 3, -4, 5, -6, -7};
    /*Act*/
    int count = countPositives(inputVector);
    /*Assert*/
    ASSERT_EQ(3, count);
}

/**
 * TestCountPositives
 */
TEST(TestCountPositives, EmptyVectorTest){
    /*Arrange*/
    std::vector<int> inputVector{};
    /*Act*/
    int count = countPositives(inputVector);
    /*Assert*/
    ASSERT_EQ(0, count);
}

/**
 * TestCountPositives
 */
TEST(TestCountPositives, AllNegativesTest){
    /*Arrange*/
    std::vector<int> inputVector{-1, -2, -3};
    /*Act*/
    int count = countPositives(inputVector);
    /*Assert*/
    ASSERT_EQ(0, count);
}

/**
 *  main runner
 */
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
