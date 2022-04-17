/*
1.  –еализовать шаблон класса Pair1, который позвол€ет пользователю передавать данные
	одного типа парами.

	—ледующий код:

	int main()
	{
	Pair1<int> p1(6, 9);
	cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

	const Pair1<double> p2(3.4, 7.8);
	cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

	return 0;

	}

	Е должен производить результат:
Pair: 6 9
Pair: 3.4 7.8
*/

#include <iostream>
#include "Pair1.h"

int main()
{
	Pair1<int> p1(6, 9);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

	const Pair1<double> p2(3.4, 7.8);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

	return 0;
}
