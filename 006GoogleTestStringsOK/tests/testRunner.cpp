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
    /*Assert*/
    ASSERT_STREQ("HELLO WORLD", inputString);

    /*Using std::string*/
    std::string str(inputString);
    ASSERT_EQ("HELLO WORLD", str);
}

/**
 *  main runner
 */
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
