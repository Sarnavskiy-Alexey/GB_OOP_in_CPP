#include "Power.h"
#include <cmath>

void Power::set(double a, double b)
{
	this->a = a;
	this->b = b;
}

double Power::calculate()
{
	return pow(a, b);
}