#include <iostream>
#include "Power.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Power f;
	std::cout << "�� ���������� �� ���������:  " << f.calculate() << "\n";
	f.set(6.8, 3.5);
	std::cout << "�� ����������: a=6.8, b=3.5: " << f.calculate() << "\n";

	return 0;
}