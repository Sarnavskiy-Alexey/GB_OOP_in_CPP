#include "Fraction.h"
#include <iostream>

// конструктор
Fraction::Fraction()
{
	m_numerator = 0;
	m_denominator = 1;
}

// конструктор с параметрами
Fraction::Fraction(int numerator, int denominator)
{
	m_numerator = numerator;
	if (denominator == 0)
	{
		std::cout << "Ошибка: знаменатель не может быть равен нулю! Знаменатель заменен на значение по умолчанию (1)!\n";
		m_denominator = 1;
	}
	else
	{
		m_denominator = denominator;
	}
}

// вывод дроби на экран
void Fraction::printFraction() const
{
	std::cout << "Fraction is: " << m_numerator << "/" << m_denominator << std::endl;
}

// set-метод для числителя
void Fraction::setNumerator(int numerator)
{
	m_numerator = numerator;
}

// set-метод для знаменателя
void Fraction::setDenominator(int denominator)
{
	m_denominator = denominator;
}

// set-метод для всей дроби
void Fraction::setFraction(int numerator, int denominator)
{
	m_numerator = numerator;
	m_denominator = denominator;
}

// get-метод числителя
int Fraction::getNumerator() const
{
	return m_numerator;
}

// get-метод знаменателя
int Fraction::getDenominator() const
{
	return m_denominator;
}
