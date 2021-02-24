#include <iostream>
#include <string>
#include <gtest/gtest.h>
#include "LibraryCode.hpp"

TEST(ToUpperTest, BasicTest)
{
 //Arrange
 char inputString[] = "Hello World";

 //Act
 toUpper(inputString);

 //ASSERT
 ASSERT_STREQ("HELLO WORLD", inputString);
 //ASSERT_STRCASEEQ("Hello WORLD", inputString);

 // or the other example:
 //  std::string str(inputString);
 //  ASSERT_EQ("HELLO WORLD", str);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
