#pragma once
#include <iostream>

class Fruit
{
protected:
	std::string name = "name";
	std::string color = "color";
public:
	std::string getName();
	std::string getColor();
};

