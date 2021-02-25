#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

/**
 * add()
 */
int add(int a, int b){
  return a+b;
}

/**
 * \class SomeClass
 */
class SomeClass{
  public:
  SomeClass() = default;
  virtual void SomeMethod(){
    std::cout << "Say something\n";
  }
  protected:
  private:
};

/**
 * \class MockedClass
 */
class MockedClass:public SomeClass{
  public:
  MockedClass() = default;
  MOCK_METHOD0(SomeMethod, void());
  protected:
  private:
};

/**
 * TestSample - TestMock
 */
TEST(TestSample, TestMock){
  MockedClass mc;
  EXPECT_CALL(mc, SomeMethod()).Times(1);
  mc.SomeMethod();
}


/**
 * TestSample - TestAddition
 */
TEST(TestSample, TestAddition){
  ASSERT_EQ(2, add(1,1));
}

/**
 * main runner
 */
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
