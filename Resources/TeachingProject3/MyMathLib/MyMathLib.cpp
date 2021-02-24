// MyMathLib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "MyMathLib.hpp"
#include <math.h>
#include <stdexcept>

double mySqrt(double x)
{
	if (x < 0)
	{
		throw std::runtime_error("Negative argument");
	}
	return sqrt(x);
}