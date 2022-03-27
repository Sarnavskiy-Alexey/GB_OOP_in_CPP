#include <iostream>
#include "RGBA.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	RGBA color_1;
	std::cout << "\tcolor 1:\n";
	color_1.print();

	RGBA color_2(50, 20, 40, 238);
	std::cout << "\tcolor 2:\n";
	color_2.print();

	return 0;
}