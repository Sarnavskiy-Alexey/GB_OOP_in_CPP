/*
1.  �������� ��������� ������� div, ������� ������ ��������� ��������� ������� ����
	���������� � ��������� ���������� DivisionByZero, ���� ������ �������� ����� 0.
	� ������� main �������� ��������� ������ ������� div � �������, � ����� ������
	����������.
*/

#include <iostream>

template <typename T>
T div(const T& a, const T& b)
{
	if (b == static_cast<T>(0))
	{
		return 0.0;
		throw "DivisionByZero";
	}

	return a / b;
}



int main()
{
	setlocale(LC_ALL, "Russian");

	double a;
	double b;
	double res;

	std::cout << "������� ���������: ";
	std::cin >> a;
	std::cout << "������� �����������: ";
	std::cin >> b;

	try
	{
		res = div(a, b);
	}
	catch (const char* e)
	{
		std::cerr << e << std::endl;
	}
	catch (...)
	{
		std::cerr << "Some undetermined error!" << std::endl;
	}

	std::cout << "���������: " << res << std::endl;

	return 0;
}
