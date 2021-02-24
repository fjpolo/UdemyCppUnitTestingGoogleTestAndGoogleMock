#include <iostream>
#include "LibraryCode/LibraryCode.hpp"

// TEST(TestSample, TestAddition){
//     ASSERT_EQ(2, add(1,1));
// }

int main(int argc, char **argv)
{
    std::cout << "Actual application code \n"; 
    std::cout << " 2 + 2 =  " << add(2, 2) << '\n';
}