#include "Player.h"

Player::Player(std::string name)
{
    this->m_name = name;
}

void Player::Win() const
{
    std::cout << this->m_name << " �������!" << std::endl;
}

void Player::Lose() const
{
    std::cout << this->m_name << " ��������!" << std::endl;
}

void Player::Push() const
{
    std::cout << this->m_name << " ������ � �����!" << std::endl;
}

bool Player::IsHitting() const
{
    std::cout << "���� ��� �����?(n/y) �����: ";
    char answer = '\0';
    bool need_card = false;
    answer = _getche();

    while (answer != 'n' && answer != 'y' &&
        answer != 'N' && answer != 'Y')
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
        std::cout << "������������ �����! ���������� ��� ���! ��� �����: ";
        answer = _getche();
    }

    if (answer == 'y' || answer == 'Y')
    {
        need_card = true;
    }

    return need_card;
}