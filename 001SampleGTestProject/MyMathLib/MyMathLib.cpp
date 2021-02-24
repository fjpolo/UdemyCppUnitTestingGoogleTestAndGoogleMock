#include <math.h>
#include "MyMathLib.h"
#include <stdexcept>

double mySqrt(double x){
    if(x < 0){
        throw std::runtime_error("Negative argument.");
    }
    return sqrt(x);
}