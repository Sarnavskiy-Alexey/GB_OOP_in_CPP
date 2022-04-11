#include "Fraction.h"
#include <iostream>

// �����������
Fraction::Fraction()
{
	m_numerator = 0;
	m_denominator = 1;
}

// ����������� � �����������
Fraction::Fraction(int numerator, int denominator)
{
	m_numerator = numerator;
	if (denominator == 0)
	{
		std::cout << "������: ����������� �� ����� ���� ����� ����! ����������� ������� �� �������� �� ��������� (1)!\n";
		m_denominator = 1;
	}
	else
	{
		m_denominator = denominator;
	}
}

// ����� ����� �� �����
void Fraction::printFraction() const
{
	std::cout << "Fraction is: " << m_numerator << "/" << m_denominator << std::endl;
}

// set-����� ��� ���������
void Fraction::setNumerator(int numerator)
{
	m_numerator = numerator;
}

// set-����� ��� �����������
void Fraction::setDenominator(int denominator)
{
	m_denominator = denominator;
}

// set-����� ��� ���� �����
void Fraction::setFraction(int numerator, int denominator)
{
	m_numerator = numerator;
	m_denominator = denominator;
}

// get-����� ���������
int Fraction::getNumerator() const
{
	return m_numerator;
}

// get-����� �����������
int Fraction::getDenominator() const
{
	return m_denominator;
}
