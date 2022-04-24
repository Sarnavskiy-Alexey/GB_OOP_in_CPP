#pragma once
#include <vector>
#include "Card.h"

class Hand
{
private:
	std::vector<Card*> m_hand;
public:
	Hand();
	~Hand();
	void Add(Card* card);
	void Clear();
	int GetValue() const;
};
