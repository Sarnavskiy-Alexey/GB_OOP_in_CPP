#pragma once

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
	Jack = 10,
	Queen = 10,
	King = 10
} CardValue;

class Card
{
private:
	CardSuit m_suit;
	CardValue m_value;
	bool m_visible;
public:
	Card(CardSuit suit, CardValue value);
	void Flip();
	unsigned short GetValue() const;
};

