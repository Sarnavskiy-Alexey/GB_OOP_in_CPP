#include "Fraction.h"

// приведение дробей к общему знаменателю
void NOK(Fraction& a, Fraction& b)
{
	int left_mult = 1;
	int right_mult = 1;

	while (a.getDenominator() * left_mult != b.getDenominator() * right_mult)
	{
		if (a.getDenominator() * left_mult < b.getDenominator() * right_mult)
		{
			left_mult++;
		}
		else
		{
			right_mult++;
		}
	}

	a *= left_mult;
	b *= right_mult;
}