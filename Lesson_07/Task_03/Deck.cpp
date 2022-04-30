#include "Deck.h"
#include "Card.h"

Deck::Deck()
{
	Populate();
}

void Deck::Populate()
{
	m_hand.clear();

	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 13; j++)
		{
			Card* card = new Card(static_cast<CardSuit>(i), static_cast<CardValue>(j));
			this->m_hand.push_back(card);
		}
	}
}

void Deck::Shuffle()
{
	std::random_shuffle(m_hand.begin(), m_hand.end());
}

void Deck::Deal(Hand& aHand)
{
	m_hand.back()->Flip();
	Card* card(this->m_hand.back());
	aHand.Add(card);
	m_hand.back()->Flip();
	this->m_hand.pop_back();
}

void Deck::AdditionalCards(GenericPlayer& aGenericPlayer)
{
	while (!aGenericPlayer.IsBoosted() && aGenericPlayer.IsHitting())
	{
		Deal(aGenericPlayer);
		std::cout << "\nКоличество очков у игрока " << aGenericPlayer.get_name() << " после добавления карты: " << aGenericPlayer.GetValue() << std::endl;
	}
}
