#include <iostream>
#include <gtest/gtest.h>
#include "LibraryCode.hpp"
// Validator(5, 10)
// 4, 5, 6, 7, 9, 10, 11 

class ValidatorFixture : public testing::TestWithParam<std::tuple<int, bool>>
{
public:
protected:
 Validator mValidator{5, 10};
};

TEST_P(ValidatorFixture, TestInRange)
{
  std::tuple<int, bool> tuple = GetParam();

  int param = std::get<0>(tuple);
  bool expectedValue = std::get<1>(tuple);

  std::cout << "param = " << param << " expected value = " << expectedValue << '\n';

  bool isInside = mValidator.inRange(param);

  ASSERT_EQ(expectedValue, isInside);
}

INSTANTIATE_TEST_CASE_P(InRangeTrue, ValidatorFixture, testing::Values(
                                                          std::make_tuple(-50, false),
                                                          std::make_tuple(4, false),
                                                          std::make_tuple(5, true),
                                                          std::make_tuple(6, true),
                                                          std::make_tuple(7, true),
                                                          std::make_tuple(9, true),
                                                          std::make_tuple(10, true),
                                                          std::make_tuple(11, false),
                                                          std::make_tuple(100, false)
));

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
