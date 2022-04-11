#include "Fraction.h"

Fraction operator/(Fraction a, Fraction b)
{
	return Fraction(a.m_numerator * b.m_denominator, a.m_denominator * b.m_numerator);
}