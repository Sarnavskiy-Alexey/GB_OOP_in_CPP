#pragma once
#include <vector>
#include <iostream>
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include "GenericPlayer.h"
#include "House.h"

class Game
{
private:
	Deck m_deck;
	House m_house_hand;
	std::vector<Player> m_players;
public:
	Game(std::vector<std::string> players);
	
	~Game();

	void play();
	
	// методы вывода результатов на экран
	void printResults() const;
};
