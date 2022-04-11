#include "PassengerCar.h"
#include <iostream>

PassengerCar::PassengerCar()
{
	std::cout << "PassengerCar" << std::endl;
	company = "Chevrolet";
	model = "Cruze";
	std::cout << company << " " << model << std::endl;
}