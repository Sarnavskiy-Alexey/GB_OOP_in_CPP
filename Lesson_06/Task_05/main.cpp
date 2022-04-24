/*
5.  �������� ���������� ��������� ������ ��� ������ Card. ���� �����
    ����������� �������� ����� (�� �� �� �����), ������� ��, ���� �� ��
    �����, ������� ����� � ������� �����. ����� ��� ������ GenericPlayer
    �������� ���������� ��������� ������, ������� ������ ���������� ���
    ������ � ��� �����, � ����� ����� ����� ����� ��� ����.
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
        CardValue value = static_cast<CardValue>(rand() % 13 + 1);
        Card* card = new Card(suit, value);
        std::cout << "��������� ����� ����� " << static_cast<int>(suit) << " ��������� " << static_cast<int>(value) << std::endl;
        
        std::cout << "����� ���������: " << *card << std::endl;
        card->Flip();
        std::cout << "����� �������: " << *card << std::endl << std::endl;
        
        // ��� ���������� ��������� ���� � ���� ������. ��� ������ ��
        // ����� ����� XX ������ ����� � ��������
        //card->Flip();

        house.Add(card);
    }

    std::cout << "� ������: " << house.GetValue() << " �����." << std::endl;
    house.Bust();

    std::cout << house;

    return 0;
}
