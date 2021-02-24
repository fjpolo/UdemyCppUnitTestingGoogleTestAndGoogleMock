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
 * TestTemplate
 */
TEST(ToUpperTest, BasicTest){
    /*Arrange*/
    char inputString[] = "Hello World";
    /*Act*/
    toUpper(inputString);
    std::cout << "After toUpper(): " << inputString << '\n';
    /*Checking pointers*/
    if(inputString == "HELLO WORLD") // pointer
    {
        std::cout << "Pointer: Equal strings\n";
    }
    else
    {
        std::cout << "Pointer: Unequal strings\n";
    }
        /*Using strcmp()*/
    if(0 == strcmp(inputString,"HELLO WORLD")) // content
    {
        std::cout << "Content: Equal strings\n";
    }
    else
    {
        std::cout << "Content: Unequal strings\n";
    }
    /*Assert*/
    ASSERT_EQ("HELLO WORLD", inputString);
}

/**
 *  main runner
 */
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
