#include <iostream>
#include <gtest/gtest.h>
#include "../LibraryCode/LibraryCode.hpp"

// /**
//  * TestTemplate
//  */
// TEST(TestName, TestCase){
//     /*Arrange*/
//     /*Act*/
//     /*Assert*/
// }

/**
 * SquareRootTest - NegativeArgumentTest
 */
TEST(SquareRootTest, NegativeArgumentTest)
{
    /*Arrange*/
    double inputValue = -9;
    /*Act*/
    /*Assert*/
    //ASSERT_ANY_THROW(mySqrt(inputValue));
    ASSERT_THROW(mySqrt(inputValue), std::runtime_error);
}

/**
 * SquareRootTest - PositiveArgumentTest
 */
TEST(SquareRootTest, PositiveArgumentTest)
{
    /*Arrange*/
     double inputValue = 9;
    /*Act*/
    /*Assert*/
    ASSERT_NO_THROW(mySqrt(inputValue));
    ASSERT_EQ(3, mySqrt(inputValue));
    ASSERT_EQ(2, mySqrt(4));
    ASSERT_EQ(5, mySqrt(25));
}


/**
 *  main runner
 */
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
