#include <iostream>
#include "Stack.h"

Stack::Stack()
{
	stack_size = 0;
	for (int a : arr)
	{
		a = 0;
	}
}

void Stack::reset()
{
	stack_size = 0;
	for (int a : arr)
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
	std::cout << "Push(" << dat << ")\n";

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
	std::cout << "Pop(" << returnable_dat << ")\n";
	return returnable_dat;
}

void Stack::print()
{
	std::cout << "In stack: ";
	if (stack_size == 0)
	{
		std::cout << "empty";
	}
	else
	{
		for (int i = stack_size - 1; i >= 0; i--)
		{
			std::cout << arr[i] << " ";
		}
	}
	std::cout << std::endl;
}