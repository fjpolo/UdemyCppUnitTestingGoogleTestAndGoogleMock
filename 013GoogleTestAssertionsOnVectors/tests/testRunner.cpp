#include <vector>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../LibraryCode/LibraryCode.hpp"

/**
 * VectorTests - ElementsAreTest
 */
TEST(VectorTests, ElementsAreTest){
  std::vector<int> v = generateNumbers(5, 3);
  // 0, 1, 2, 0, 1
  ASSERT_THAT(v, testing::ElementsAre(0, 1, 2, 0, 1));
}

/**
 * VectorTests - RangeTest
 */
TEST(VectorTests, RangeTest){
  using namespace testing;
  std::vector<int> v = generateNumbers(5, 3);
  ASSERT_THAT(v, Each(AllOf(Ge(0), Lt(3))));
}


/**
 * main runner
 */
int main(int argc, char **argv){
 ::testing::InitGoogleTest(&argc, argv);
 return RUN_ALL_TESTS();
}
