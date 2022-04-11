#include "Fraction.h"

Fraction operator-(Fraction a, Fraction b)
{
	NOK(a, b);
	return a + (-b);
}