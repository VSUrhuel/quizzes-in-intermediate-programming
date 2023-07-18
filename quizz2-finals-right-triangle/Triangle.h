#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED
#include <cmath>
class Triangle
{
public:
    Triangle(double, double);
    Triangle();
    double area();
    void setBase(double);
    void setHeight(double);
    ~Triangle();
protected:
    double base;
    double height;
};
#endif // TRIANGLE_H_INCLUDED
