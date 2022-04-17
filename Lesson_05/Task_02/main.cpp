/*
2.  ����������� ����� Pair, ������� ��������� ������������ ������ ���� ������ � ������������ �����.

	��������� ���:

int main()
{
Pair<int, double> p1(6, 7.8);
cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

const Pair<double, int> p2(3.4, 5);
cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

return 0;

}

	� ������ ����������� ��������� ���������:
Pair: 6 7.8
Pair: 3.4 5

���������: ����� ���������� ������ � �������������� ���� ������ �����, ������ ��������� ��������� ���� ������� �������.
*/

#include <iostream>
#include "Pair.h"

int main()
{
	Pair<int, double> p1(6, 7.8);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

	const Pair<double, int> p2(3.4, 5);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

	return 0;
}
