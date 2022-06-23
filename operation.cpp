#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include "AllHeaders.h"
#include <cmath>
using namespace std;
namespace constans
{
    extern const float pi(3.14159);
    extern const float e(2.71828);
}
void add(float x, float y)
{
    result(x + y);
}
void subtract(float x, float y)
{
    result(x - y);
}
void radical(float x, float y)
{
    power(x, 1.0 / y);
}
void power(float x, float y)
{
    result(pow(x, y));
}
void piPower(float x)
{
    power(constans::pi,x );
}
void ePower(float x)
{
    power(constans::e, x);
}
void mSin(float x)
{
    result(sin(radian(x)));
}
float radian(float x)
{
    return x * constans::pi / 180;
}
void mCos(float x)
{
    result(cos(radian(x)));
}
void multiply(float x, float y)
{
    result(x * y);
}
void percent(float x, float y)
{
    result(x / 100 * y);
}
void divide(float x, float y)
{
    if (y == 0)
    {
        cout << "you cant divide by 0" << endl;

    }
    else
    {
        result(x / y);
    }
}
