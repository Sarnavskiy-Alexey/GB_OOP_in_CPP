/*
4.  ����������� ����� House, ������� ������������ ������. ���� �����
    ��������� �� ������ GenericPlayer. � ���� ���� 2 ������:

� virtual bool IsHitting() const - ����� ���������, ����� �� ������ ���
    ���� �����. ���� � ������ �� ������ 16 �����, �� �� ����� ��� ����
    �����.
� void FlipFirstCard() - ����� �������������� ������ ����� ������.
*/

#include <iostream>

#include "Card.h"
#include "GenericPlayer.h"
#include "Hand.h"
#include "House.h"
#include "Player.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    House house;
    while (house.IsHitting())
    {
        CardSuit suit = static_cast<CardSuit>(rand() % 4 + 1);
        CardValue value = static_cast<CardValue>(rand() % 10 + 1);
        Card* card = new Card(suit, value);
        std::cout << "��������� ����� ����� " << static_cast<int>(suit) << " ��������� " << static_cast<int>(value) << std::endl;
        house.Add(card);
    }

    std::cout << "� ������: " << house.GetValue() << " �����." << std::endl;
    house.Bust();

    house.FlipFirstCard();

    // ����� ������ GetValue � ���� ��� ����������, ��� ����� FlipFirstCard
    // ������������� �������������� ������ ����� ������, ��� ��� � ������
    // GetValue ���������������� ��� ����� ��� �������� (�� ����� �����
    // ��� ���� ��� �����)
    std::cout << "� ������ ��� ������ �����: " << house.GetValue() << " �����." << std::endl;

    return 0;
}