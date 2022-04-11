#include "Fraction.h"

bool operator==(Fraction a, Fraction b)
{
	NOK(a, b);
	return (a.m_numerator == b.m_numerator);
}

bool operator!=(const Fraction& a, const Fraction& b)
{
	return !(a == b);
}

bool operator<(Fraction a, Fraction b)
{
	NOK(a, b);
	return (a.m_numerator < b.m_numerator);
}
bool operator>=(const Fraction& a, const Fraction& b)
{
	return !(a < b);
}
bool operator>(Fraction a, Fraction b)
{
	NOK(a, b);
	return (a.m_numerator > b.m_numerator);
}
bool operator<=(const Fraction& a, const Fraction& b)
{
	return !(a > b);
}
