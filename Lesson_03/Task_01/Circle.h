#pragma once
#include "Figure.h"
class Circle :
    public Figure
{
private:
    double r;
    const double pi = 3.141592;
public:
    Circle();
    void setRadius(double r);
    double area();
};

