#pragma once
#include <iostream>
#include "Hand.h"

class GenericPlayer :
    public Hand
{
protected:
    std::string m_name;
public:
	GenericPlayer(std::string name = "");
	virtual bool IsHitting() const = 0;
	bool IsBoosted() const;
	void Bust();

	std::string get_name() const;

	friend std::ostream& operator<< (std::ostream& _Ostr, const GenericPlayer& genpl);
};
