#include <iostream>
#include <gtest/gtest.h>
#include "LibraryCode.hpp"

TEST(ToUpperTest, BasicTest)
{
 //Arrange
 char inputString[] = "Hello World";

 //Act
 toUpper(inputString);

 std::cout << "After toUpper: " << inputString << '\n';
 if(inputString == "HELLO WORLD") // pointer
 {
     std::cout << "Equal strings\n";
 }
 else
 {
     std::cout << "Unequal strings\n";
 }

 if(0 == strcmp(inputString,"HELLO WORLD")) // content
 {
     std::cout << "Equal strings\n";
 }
 else
 {
     std::cout << "Unequal strings\n";
 }
 //ASSERT
 ASSERT_EQ("HELLO WORLD", inputString);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
