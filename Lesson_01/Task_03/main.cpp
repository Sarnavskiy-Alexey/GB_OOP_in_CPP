#include <iostream>
#include "Stack.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Stack stack;
	stack.reset();
	stack.print();

	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();
	stack.print();

	return 0;
}