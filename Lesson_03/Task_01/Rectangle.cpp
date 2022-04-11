#include "Rectangle.h"

Rectangle::Rectangle()
{
	a = 0.0;
	b = 0.0;
	square = 0.0;
}

double Rectangle::area()
{
	square = a * b;
	return square;
}

void Rectangle::setSides(double a, double b)
{
	this->a = a;
	this->b = b;
}