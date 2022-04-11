#include "Parallelogram.h"

Parallelogram::Parallelogram()
{
	a = 0.0;
	ha = 0.0;
	square = 0.0;
}

void Parallelogram::setSides(double a, double ha)
{
	this->a = a;
	this->ha = ha;
}

double Parallelogram::area()
{
	square = a * ha;
	return square;
}