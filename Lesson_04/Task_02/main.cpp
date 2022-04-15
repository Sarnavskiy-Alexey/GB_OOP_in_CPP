/*
2.  Дан вектор чисел, требуется выяснить, сколько среди них различных. Постараться
	использовать максимально быстрый алгоритм.
*/

#include <iostream>
#include <vector>

#include "Tree.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	std::vector<int> VectorInt;
	int vectorsize = 0;

	std::cout << "Введите размер вектора: ";
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

	std::cout << "Количество различных элементов вектора: " << tree.getSize();

	return 0;
}