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

std::ostream& operator<< (std::ostream& _Ostr, const Card& card)
{
	if (!card.m_visible)
	{
		_Ostr << "XX";
	}
	else
	{
		_Ostr << CharCardSuit[static_cast<unsigned int>(card.m_suit)];
		_Ostr << CharCardValues[static_cast<unsigned int>(card.m_value)];
	}

	return _Ostr;
}