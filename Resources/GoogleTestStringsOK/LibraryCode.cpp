#include "LibraryCode.hpp"
#include <cctype>
#include <cstring>

//hello world -> HELLO WORLD

void toUpper(char *inputString)
{
    for(unsigned i = 0; i < strlen(inputString); i++)
    {
        inputString[i] = toupper(inputString[i]); //a -> A, b -> B
    }
}