#pragma once
#include "Figure.h"
class Parallelogram :
    public Figure
{
private:
    double a;
    double ha;
public:
    Parallelogram();
    void setSides(double a, double ha);
    double area();
};

