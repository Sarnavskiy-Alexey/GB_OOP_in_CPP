#include "Bus.h"
#include <iostream>

Bus::Bus()
{
	std::cout << "Bus" << std::endl;
	company = "KAMAZ";
	model = "6292";
	std::cout << company << " " << model << std::endl;
}