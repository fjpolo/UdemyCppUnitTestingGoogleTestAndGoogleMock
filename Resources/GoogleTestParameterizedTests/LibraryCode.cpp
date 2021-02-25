#include "LibraryCode.hpp"

Validator::Validator(int low, int high) : mLow{low}, mHigh{high}
{
}

bool Validator::inRange(int valueToTest) const
{
    return mLow <= valueToTest && valueToTest <= mHigh;
}
