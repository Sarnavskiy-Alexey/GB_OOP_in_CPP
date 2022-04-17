#pragma once
#include <iostream>
#include "Hand.h"

class GenericPlayer :
    public Hand
{
protected:
    std::string m_name;
public:
	GenericPlayer(std::string name);
	virtual bool IsHitting() = 0;
	bool IsBoosted() const;
	void Bust();
};

