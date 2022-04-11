#include <iostream>
#include "Square.h"

Square::Square()
{
	square = 0.0;
	this->length = 0.0;
}

double Square::area()
{
	square = length * length;
	return square;
}

void Square::setLength(double length)
{
	this->length = length;
}