#pragma once
#include <iostream>

typedef enum class CardSuit
{
	Spades = 1,
	Hearts = 2,
	Clubs = 3,
	Diamonds = 4
} CardSuit;

typedef enum class CardValue
{
	Ace = 1,
	Two = 2,
	Three = 3,
	Four = 4,
	Five = 5,
	Six = 6,
	Seven = 7,
	Eight = 8,
	Nine = 9,
	Ten = 10,
	Jack = 11,
	Queen = 12,
	King = 13
} CardValue;

const char CharCardValues[] = {'\0', 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', '\0'};
const char CharCardSuit[] = { '\0', 'S', 'H', 'C', 'D', '\0' };

class Card
{
protected:
	CardSuit m_suit;
	CardValue m_value;
	bool m_visible;
public:
	Card(CardSuit suit, CardValue value);
	void Flip();
	unsigned short GetValue() const;

	friend std::ostream& operator<<(std::ostream& _Ostr, const Card& card);
};

