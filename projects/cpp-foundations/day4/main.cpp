#include <cassert>

int divide(int value, int divisor)
{
    assert(divisor != 0);
    return value / divisor;
}