#pragma once
#include "Parallelogram.h"
class Square :
    protected Parallelogram
{
private:
    double length;
public:
    Square();
    double area();
    void setLength(double length);
};

