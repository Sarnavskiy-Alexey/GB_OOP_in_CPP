#include "Hand.h"

void Hand::Add(Card* card)
{
	m_hand.push_back(card);
}

void Hand::Clear()
{
	m_hand.clear();
}

int Hand::GetValue()
{
	int sum = 0;
	for (int i = 0; i < m_hand.size(); i++)
	{
		m_hand[i]->Flip();
		if (m_hand[i]->GetValue() == static_cast<unsigned short>(CardValue::Ace))
		{
			sum += m_hand[i]->GetValue() + 10;
		}
		else
		{
			sum += m_hand[i]->GetValue();
		}
		m_hand[i]->Flip();
	}

	if (sum > 21)
	{
		for (int i = 0; i < m_hand.size(); i++)
		{
			m_hand[i]->Flip();
			if (m_hand[i]->GetValue() == static_cast<unsigned short>(CardValue::Ace))
			{
				sum -= 10;
			}
			m_hand[i]->Flip();

			if (sum <= 21)
			{
				break;
			}
		}
	}

	return sum;
}

Hand::Hand()
{
	m_hand.clear();
}

Hand::~Hand()
{
	m_hand.clear();
}