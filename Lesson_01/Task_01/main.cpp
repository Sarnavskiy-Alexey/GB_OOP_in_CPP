#include <iostream>
#include "Power.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Power f;
	std::cout << "Со значениями по умолчанию:  " << f.calculate() << "\n";
	f.set(6.8, 3.5);
	std::cout << "Со значениями: a=6.8, b=3.5: " << f.calculate() << "\n";

	return 0;
}