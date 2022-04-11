#include "Fraction.h"

// перегрузка оператора "*" через дружественную функцию с использованием двух дробей
Fraction operator*(const Fraction& a, const Fraction& b)
{
	return Fraction(a.m_numerator * b.m_numerator, a.m_denominator * b.m_denominator);
}

// перегрузка оператора "*" через обычную функцию
Fraction operator*(const Fraction& a, const int& b)
{
	return Fraction(a.getNumerator() * b, a.getNumerator() * b);
}

// перегрузка оператора "*" через обычную функцию
Fraction operator*(const int& a, const Fraction& b)
{
	return Fraction(a * b.getNumerator(), a * b.getNumerator());
}

// перегрузка оператора "*=" через дружественную функцию
Fraction& operator*=(Fraction& a, const Fraction& b)
{
	a.m_numerator = a.m_numerator * b.m_numerator;
	a.m_denominator = a.m_denominator * b.m_denominator;
	return a;
}

Fraction& operator*=(Fraction& a, const int& b)
{
	a.setFraction(a.getNumerator() * b, a.getDenominator() * b);
	return a;
}
