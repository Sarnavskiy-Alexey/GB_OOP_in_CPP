#pragma once
#include "Parallelogram.h"
class Rhombus :
    protected Parallelogram
{
private:
	double diag_a;
	double diag_b;
public:
	Rhombus();
    double area();
    void setDiags(double diag_a, double diag_b);
};

