#include <iostream>
#include "Stack.h"

Stack::Stack()
{
	stack_size = 0;
	for (int &a : arr)
	{
		a = 0;
	}
}

void Stack::reset()
{
	stack_size = 0;
	for (int &a : arr)
	{
		a = 0;
	}
}

bool Stack::push(int dat)
{
	if (stack_size == SIZE)
	{
		std::cout << "Stack overflow!\n";
		return false;
	}

	arr[stack_size] = dat;
	stack_size++;

	return true;
}

int Stack::pop()
{
	if (stack_size == 0)
	{
		std::cout << "Stack is empty\n";
		return 0;
	}

	int returnable_dat = arr[stack_size - 1];
	stack_size--;
	return returnable_dat;
}

void Stack::print()
{
	std::cout << "( ";
	for (int i = stack_size - 1; i >= 0; i--)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << ")" << std::endl;
}