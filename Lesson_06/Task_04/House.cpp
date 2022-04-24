#include "House.h"

House::House(std::string name)
{
	this->m_name = name;
}

bool House::IsHitting() const
{
	return (this->GetValue() <= 16 ? true : false );
}

void House::FlipFirstCard()
{
	if (m_hand.size() > 0)
	{
		this->m_hand[0]->Flip();
	}
}
