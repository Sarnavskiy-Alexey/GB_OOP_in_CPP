#include "Game.h"

Game::Game(std::vector<std::string> players)
{
	// создание игроков
	for (int i = 0; i < players.size(); i++)
	{
		Player tmp_player(players[i]);
		m_players.push_back(tmp_player);
	}

	// перемешивание колоды
	m_deck.Populate();
	m_deck.Shuffle();
}

Game::~Game()
{
	m_players.clear();
}

void Game::play()
{
	bool dealer_won = true;

	// раздача по две карты дилеру и игрокам
	for (int i = 0; i < 2; i++)
	{
		m_deck.Deal(m_house_hand);
		for (int j = 0; j < m_players.size(); j++)
		{
			m_deck.Deal(m_players[j]);
		}
	}

	// карта дилера спрятана
	m_house_hand.FlipFirstCard();

	// вывод карт на экран
	printResults();
	std::cout << "\n-------------------------------------------\n";

	// раздача дополнительных карт игрокам
	for (int i = 0; i < m_players.size(); i++)
	{
		std::cout << "\nХод игрока " << m_players[i].get_name() << ":\n";
		m_deck.AdditionalCards(m_players[i]);
	}

	// вывод карт на экран после раздачи вместе с первой картой дилера
	std::cout << "\n\nРезультаты после раздачи карт игрокам:\n";
	m_house_hand.FlipFirstCard();
	printResults();
	int for_setw = 15 - m_house_hand.get_hand_size() * 3;
	std::cout << std::setw(for_setw > 1 ? for_setw : 1) << std::right << "[" << m_house_hand.GetValue() << "]";
	std::cout << "\n-------------------------------------------\n";

	// ход дилера: берет карты в случае, если все игроки не проиграли и у дилера <= 16 очков
	std::cout << "Ход игрока " << m_house_hand.get_name() << ":\n";
	bool need_dealers_turn = false;
	for (int i = 0; i < m_players.size(); i++)
	{
		if (m_players[i].GetValue() <= 21)
		{
			need_dealers_turn = true;
		}
	}
	if (need_dealers_turn)
	{
		m_deck.AdditionalCards(m_house_hand);
	}

	// вывод карт на экран после хода Дилера
	printResults();
	for_setw = 15 - m_house_hand.get_hand_size() * 3;
	std::cout << std::setw(for_setw > 1 ? for_setw : 1) << std::right << "[" << m_house_hand.GetValue() << "]";
	std::cout << "\n-------------------------------------------\n";

	// если у дилера <= 21, то анализируем, какие игроки победили, проиграли или сыграли вничью
	if (m_house_hand.GetValue() <= 21)
	{
		for (int i = 0; i < m_players.size(); i++)
		{
			if (m_players[i].GetValue() <= 21 && m_players[i].GetValue() > m_house_hand.GetValue())
			{
				dealer_won = false;
			}
		}

		if (dealer_won)
		{
			std::cout << "Дилер выиграл!" << std::endl;
			for (int i = 0; i < m_players.size(); i++)
			{
				m_players[i].Lose();
			}
		}
		else
		{
			std::cout << "Дилер проиграл!" << std::endl;
			for (int i = 0; i < m_players.size(); i++)
			{
				if (m_players[i].GetValue() <= 21)
				{
					if (m_players[i].GetValue() > m_house_hand.GetValue())
					{
						m_players[i].Win();
					}
					else if (m_players[i].GetValue() == m_house_hand.GetValue())
					{
						m_players[i].Push();
					}
					else
					{
						m_players[i].Lose();
					}
				}
				else
				{
					m_players[i].Lose();
				}
			}
		}
	}
	//если у дилера больше 21, то все игроки, кто остался в игре, победили, остальные проиграли
	else
	{
		std::cout << "Дилер проиграл!" << std::endl;
		for (int i = 0; i < m_players.size(); i++)
		{
			if (m_players[i].GetValue() <= 21)
			{
				m_players[i].Win();
			}
			else
			{
				m_players[i].Lose();
			}
		}
	}

	m_house_hand.Clear();
	for (int i = 0; i < m_players.size(); i++)
	{
		m_players[i].Clear();
	}
}

void Game::printResults() const
{
	std::cout << std::setw(13) << std::left << "Имя игрока " << std::setw(15) << "Карты " << "Количество очков " << std::endl;

	for (int i = 0; i < m_players.size(); i++)
	{
		std::cout << std::setw(13) << std::left << m_players[i].get_name() << " ";
		m_players[i].printHand();
		int for_setw = 15 - m_players[i].get_hand_size() * 3;
		std::cout << std::setw(for_setw > 1 ? for_setw : 1) << std::right << "[" << m_players[i].GetValue() << "]" << std::endl;
	}

	std::cout << std::setw(13) << std::left << m_house_hand.get_name() << " ";
	m_house_hand.printHand();
}
