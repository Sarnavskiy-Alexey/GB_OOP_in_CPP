#pragma once
#define SIZE 10

class Stack
{
private:
	int arr[SIZE] = { 0 };
	int stack_size = 0;
public:
	Stack();
	void reset();
	bool push(int dat);
	int pop();
	void print();
};

