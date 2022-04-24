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
		std::cout << "� ������ " << this->m_name << " �������: " << this->GetValue() << "\n";
	}
}
