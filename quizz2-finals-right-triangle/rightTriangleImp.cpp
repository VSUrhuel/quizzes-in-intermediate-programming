#include "RightTriangle.h"
#include <cmath>

double RightTriangle::hypothenuse()
{
    return sqrt(height*height + base*base);
}
RightTriangle::RightTriangle(double b, double h)
:Triangle(b,h)
{
}
RightTriangle::RightTriangle()
{
    base = 0;
    height = 0;
}
double RightTriangle::angle1()
{
    return atan(height/base) * 180/M_PI;
}
double RightTriangle::angle2()
{
    return 90.00 - angle1();
}
RightTriangle::~RightTriangle()
{

}
