#include "Minivan.h"
#include <iostream>

Minivan::Minivan()
{
	std::cout << "Minivan" << std::endl;
	company = "Volkswagen";
	model = "Caddy";
	std::cout << company << " " << model << std::endl;
}