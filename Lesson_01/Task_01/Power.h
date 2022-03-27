#pragma once
// класс Power
class Power
{
private:
	double a = 3.5;		// значение по умолчанию
	double b = 5.5;		// значение по умолчанию
public:
	void set(double a, double b);		// метод set
	double calculate();					// метод calculate
};

