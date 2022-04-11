#pragma once
#include "Parallelogram.h"
class Rectangle :
    protected Parallelogram
{
private:
    double a;
    double b;
public:
    Rectangle();
    void setSides(double a, double b);
    double area();
};

