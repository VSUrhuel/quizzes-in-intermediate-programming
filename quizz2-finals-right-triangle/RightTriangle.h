#ifndef RIGHTTRIANGLE_H_INCLUDED
#define RIGHTTRIANGLE_H_INCLUDED
#include"Triangle.h"

class RightTriangle: public Triangle
{
public:
    double hypothenuse();
    RightTriangle();
    RightTriangle(double, double);
    double angle1();
    double angle2();
    ~RightTriangle();
};
#endif // RIGHTTRIANGLE_H_INCLUDED
