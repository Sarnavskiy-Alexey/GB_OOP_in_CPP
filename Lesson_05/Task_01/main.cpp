/*
1.  ����������� ������ ������ Pair1, ������� ��������� ������������ ���������� ������
	������ ���� ������.

	��������� ���:

	int main()
	{
	Pair1<int> p1(6, 9);
	cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

	const Pair1<double> p2(3.4, 7.8);
	cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

	return 0;

	}

	� ������ ����������� ���������:
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