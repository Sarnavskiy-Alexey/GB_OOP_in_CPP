/*
1.  Написать шаблонную функцию div, которая должна вычислять результат деления двух
	параметров и запускать исключение DivisionByZero, если второй параметр равен 0.
	В функции main выводить результат вызова функции div в консоль, а также ловить
	исключения.
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

	std::cout << "Введите числитель: ";
	std::cin >> a;
	std::cout << "Введите знаменатель: ";
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

	std::cout << "Результат: " << res << std::endl;

	return 0;
}
