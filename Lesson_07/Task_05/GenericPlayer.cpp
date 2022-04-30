#include "GenericPlayer.h"

GenericPlayer::GenericPlayer(std::string name)
{
	this->m_name = name;
}

bool GenericPlayer::IsBoosted() const
{
	return this->GetValue() > 21;
}

void GenericPlayer::Bust()
{
	if (IsBoosted())
	{
		std::cout << "У игрока " << this->m_name << " перебор: " << this->GetValue() << "\n";
	}
}

std::ostream& operator<< (std::ostream& _Ostr, const GenericPlayer& genpl)
{
	_Ostr << "Имя: " << genpl.m_name << "\n";
	_Ostr << "Карты: ";
	for (int i = 0; i < genpl.m_hand.size(); i++)
	{
		_Ostr << *genpl.m_hand[i] << " ";
	}
	_Ostr << "\nОбщее количество очков: " << genpl.GetValue();

	return _Ostr;
}

std::string GenericPlayer::get_name() const
{
	return this->m_name;
}