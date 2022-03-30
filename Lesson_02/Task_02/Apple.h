#pragma once
#include "Fruit.h"
#include <iostream>

class Apple :
    public Fruit
{
public:
    Apple();
    Apple(std::string color);
};

