#include "Card.h"

Card::Card(CardSuit suit, CardValue value)
{
	this->m_suit = suit;
	this->m_value = value;
	this->m_visible = false;
}

void Card::Flip()
{
	this->m_visible = !this->m_visible;
}

unsigned short Card::GetValue() const
{
	if (this->m_visible)
	{
		return static_cast<unsigned short>(this->m_value);
	}
	else
	{
		return 0;
	}
}
