#include "Hand.h"

void Hand::Add(Card* card)
{
	m_hand.push_back(card);
}

void Hand::Clear()
{
	for (int i = 0; i < m_hand.size(); i++)
	{
		delete m_hand[i];
	}

	m_hand.clear();
}

int Hand::GetValue() const
{
	int sum = 0;
	for (int i = 0; i < m_hand.size(); i++)
	{
		bool turned = false;
		if (m_hand[i]->GetValue() == 0)
		{
			m_hand[i]->Flip();
			turned = true;
		}

		if (m_hand[i]->GetValue() == static_cast<unsigned short>(CardValue::Ace))
		{
			sum += m_hand[i]->GetValue() + 10;
		}
		else
		{
			switch (m_hand[i]->GetValue())
			{
				case 11:
				case 12:
				case 13:
				{
					sum += 10;
					break;
				}
			default:
				{
					sum += m_hand[i]->GetValue();
				}
			}
		}
		
		if (turned)
		{
			m_hand[i]->Flip();
		}
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
	this->Clear();
}