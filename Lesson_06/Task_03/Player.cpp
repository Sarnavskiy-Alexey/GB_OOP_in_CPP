#include "Player.h"

Player::Player(std::string name)
{
    this->m_name = name;
}

void Player::Win() const
{
    std::cout << this->m_name << " победил!" << std::endl;
}

void Player::Lose() const
{
    std::cout << this->m_name << " проиграл!" << std::endl;
}

void Player::Push() const
{
    std::cout << this->m_name << " сыграл в ничью!" << std::endl;
}

bool Player::IsHitting() const
{
    std::cout << "Дать еще карту?(n/y) Ответ: ";
    char answer = '\0';
    bool need_card = false;
    answer = _getche();

    while (answer != 'n' && answer != 'y' &&
        answer != 'N' && answer != 'Y')
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
        std::cout << "Некорректный ответ! Попробуйте еще раз! Ваш ответ: ";
        answer = _getche();
    }

    if (answer == 'y' || answer == 'Y')
    {
        need_card = true;
    }

    return need_card;
}