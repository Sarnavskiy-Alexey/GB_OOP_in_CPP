#include "Fraction.h"

Fraction operator+(Fraction a, Fraction b)
{
	NOK(a, b);
	return Fraction(a.m_numerator + b.m_numerator, a.m_denominator);
}