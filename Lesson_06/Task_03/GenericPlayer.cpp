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
