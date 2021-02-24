#include "../MyMathLib/MyMathLib.h"
#include <gtest/gtest.h>

TEST(MathTestCase, MathTestSqrt9){
    EXPECT_EQ(3, mySqrt(81));
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}