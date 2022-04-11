#include "Circle.h"

Circle::Circle()
{
	r = 0.0;
	square = 0.0;
}

void Circle::setRadius(double r)
{
	this->r = r;
}

double Circle::area()
{
	square = pi * r * r;
	return square;
}