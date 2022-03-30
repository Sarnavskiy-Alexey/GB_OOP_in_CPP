#pragma once
#include <iostream>

class Person
{
protected:
	std::string name = "";
	int age = 0;
	bool is_male = 0;
	double weight = 0.0;
public:
	Person();
	Person(bool is_male);
	void setName(std::string name);
	void setAge(int age);
	void setWeight(double weight);
};
