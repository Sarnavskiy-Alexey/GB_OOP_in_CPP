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

std::ostream& operator<< (std::ostream& _Ostr, const GenericPlayer& genpl)
{
	_Ostr << "���: " << genpl.m_name << "\n";
	_Ostr << "�����: ";
	for (int i = 0; i < genpl.m_hand.size(); i++)
	{
		_Ostr << *genpl.m_hand[i] << " ";
	}
	_Ostr << "\n����� ���������� �����: " << genpl.GetValue();

	return _Ostr;
}

std::string GenericPlayer::get_name() const
{
	return this->m_name;
}