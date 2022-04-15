/*
2.  ��� ������ �����, ��������� ��������, ������� ����� ��� ���������. �����������
	������������ ����������� ������� ��������.
*/

#include <iostream>
#include <vector>

#include "Tree.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	std::vector<int> VectorInt;
	int vectorsize = 0;

	std::cout << "������� ������ �������: ";
	std::cin >> vectorsize;

	for (int i = 0; i < vectorsize; i++)
	{
		int tmp;
		std::cin >> tmp;
		VectorInt.push_back(tmp);
	}

	Tree tree;

	for (int i = 0; i < vectorsize; i++)
	{
		tree.push(VectorInt[i]);
	}

	std::cout << "���������� ��������� ��������� �������: " << tree.getSize();

	return 0;
}