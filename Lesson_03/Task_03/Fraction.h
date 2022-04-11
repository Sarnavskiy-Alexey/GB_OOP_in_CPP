#pragma once
class Fraction
{
private:
	int m_numerator;
	int m_denominator;
public:
	Fraction();
	Fraction(int numerator, int denominator);

	void printFraction() const;

	void setNumerator(int numerator);
	void setDenominator(int denominator);
	void setFraction(int numerator, int denominator);
	
	int getNumerator() const;
	int getDenominator() const;
	
	friend void NOK(Fraction& a, Fraction& b);

	// ������ 1: ���������� �������� ���������� ����� ������������� ������� ��� ��������� ������ ��������
	friend Fraction operator+(Fraction a, Fraction b);
	friend Fraction operator-(Fraction a, Fraction b);
	friend Fraction operator*(const Fraction& a, const Fraction& b);
	friend Fraction operator/(Fraction a, Fraction b);

	// ������ 2: ���������� �������� ��������� "-" ����� ����� ������
	Fraction operator-();

	// ������ 3: ���������� �������� ���������� ���������� ����� ������ ������
	friend bool operator==(Fraction a, Fraction b);
	friend bool operator!=(const Fraction& a, const Fraction& b);
	friend bool operator<(Fraction a, Fraction b);
	friend bool operator>=(const Fraction& a, const Fraction& b);
	friend bool operator>(Fraction a, Fraction b);
	friend bool operator<=(const Fraction& a, const Fraction& b);

	// ���������� �������� ���������� ����� ����� ������ � ���������� ������ ��������
	friend Fraction& operator*=(Fraction& a, const Fraction& b);
};

// ���������� ��������� "*" ����� ������� �������
Fraction operator*(const Fraction& a, const int& b);
Fraction operator*(const int& a, const Fraction& b);

// ���������� ��������� "*=" ����� ������� �������
Fraction& operator*=(Fraction& a, const int& b);