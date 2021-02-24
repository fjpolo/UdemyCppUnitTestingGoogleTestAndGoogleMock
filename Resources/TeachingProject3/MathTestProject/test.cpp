#include "pch.h"
#include "../MyMathLib/MyMathLib.hpp"

TEST(MathTestCase, MathTestSqrt9)
{
	ASSERT_EQ(3, mySqrt(9));
}