#pragma once
#include <vector>
#include "Card.h"

class Hand
{
protected:
	std::vector<Card*> m_hand;
public:
	Hand();
	
	~Hand();

	void Add(Card* card);
	void Clear();
	int GetValue() const;

	void printHand() const;
};
