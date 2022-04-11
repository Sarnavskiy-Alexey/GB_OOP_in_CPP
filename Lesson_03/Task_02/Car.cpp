#include <iostream>
#include "Car.h"

Car::Car()
{
	std::cout << "Car" << std::endl;
	company = "BELAZ";
	model = "75710";
	std::cout << company << " " << model << std::endl;
}