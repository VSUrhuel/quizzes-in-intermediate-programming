#include "Triangle.h"
#include <cmath>
Triangle::~Triangle()
{

}
Triangle::Triangle(double baseVar, double heightVar)
{
    base = abs(baseVar);
    height = abs(heightVar);
}
Triangle::Triangle()
{
    base = 0;
    height = 0;
}
double Triangle::area()
{
    return base * height * 0.5;
}
void Triangle::setBase(double b)
{
    base = abs(b);
}
void Triangle::setHeight(double h)
{
    height = abs(h);
}
