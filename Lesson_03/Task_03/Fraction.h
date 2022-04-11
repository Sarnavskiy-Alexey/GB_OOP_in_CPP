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

	// «адача 1: перегрузка бинарных операторов через дружественные функции без изменени€ левого операнда
	friend Fraction operator+(Fraction a, Fraction b);
	friend Fraction operator-(Fraction a, Fraction b);
	friend Fraction operator*(const Fraction& a, const Fraction& b);
	friend Fraction operator/(Fraction a, Fraction b);

	// «адача 2: перегрузка унарного оператора "-" через метод класса
	Fraction operator-();

	// «адача 3: перегрузка бинарных логических операторов через методы класса
	friend bool operator==(Fraction a, Fraction b);
	friend bool operator!=(const Fraction& a, const Fraction& b);
	friend bool operator<(Fraction a, Fraction b);
	friend bool operator>=(const Fraction& a, const Fraction& b);
	friend bool operator>(Fraction a, Fraction b);
	friend bool operator<=(const Fraction& a, const Fraction& b);

	// перегрузка бинарных операторов через метод класса с изменением левого операнда
	friend Fraction& operator*=(Fraction& a, const Fraction& b);
};

// перегрузка оператора "*" через обычные функции
Fraction operator*(const Fraction& a, const int& b);
Fraction operator*(const int& a, const Fraction& b);

// перегрузка оператора "*=" через обычные функции
Fraction& operator*=(Fraction& a, const int& b);