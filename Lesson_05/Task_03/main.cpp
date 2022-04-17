/*
3.  �������� ������ ������ StringValuePair, � ������� ������ �������� ������ ����
	string, � ������ � ������ ����. ���� ������ ������ ������ ����������� ��������
	������������������ ����� Pair, � ������� ������ �������� � string, � ������ �
	������ ���� ������.

	��������� ���:

int main()
{
StringValuePair<int> svp("Amazing", 7);
std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
return 0;
}

	� ������ ����������� ��������� ���������:
Pair: Amazing 7

	���������: ��� ������ ������������ ������ **Pair* �� ������������ ������
	StringValuePair �� �������� �������, ��� ��������� ��������� � ������ Pair. *
*/

#include <iostream>
#include "StringValuePair.h"

int main()
{
	StringValuePair<int> svp("Amazing", 7);
	std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
	return 0;
}
