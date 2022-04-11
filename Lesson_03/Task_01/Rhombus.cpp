#include "Rhombus.h"

Rhombus::Rhombus()
{
	square = 0.0;
	diag_a = 0.0;
	diag_b = 0.0;
}


double Rhombus::area()
{
	square = diag_a * diag_b / 2.0;
	return square;
}

void Rhombus::setDiags(double diag_a, double diag_b)
{
	this->diag_a = diag_a;
	this->diag_b = diag_b;
}