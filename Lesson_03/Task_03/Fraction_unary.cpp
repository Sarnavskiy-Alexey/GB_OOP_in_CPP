#include "Fraction.h"

Fraction Fraction::operator-()
{
	return Fraction(this->m_numerator * (-1), this->m_denominator);
}