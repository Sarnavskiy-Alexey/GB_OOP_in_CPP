/*
3.  ������� ����� Deck, ������� ��������� �� ������ Hand � ������������ �����
    ������ ����. ����� Deck ����� 4 ������:

�  vold Populate() - ������� ����������� ������ �� 52 ����, ���������� ��
    ������������.
�  void Shuffle() - �����, ������� ������ �����, ����� ������������ ������� ��
    ���������� STL random_shuffle
�  vold Deal (Hand& aHand) - �����, ������� ������� � ���� ���� �����
�  void AddltionalCards (GenericPlayer& aGenerlcPlayer) - ������� ������
    �������������� ����� �� ��� ���, ���� �� ����� � ����� �� ��������

    �������� �������� �� ���������� ������������. � ����� ������� ����������� ����
    ������� ���?
*/

#include <iostream>

#include "Card.h"
#include "GenericPlayer.h"
#include "Hand.h"
#include "House.h"
#include "Player.h"
#include "Deck.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    // �������� ������
    Deck deck;
    deck.Shuffle();

    //�������� ������
    Player player("�������");

    deck.AdditionalCards(player);
    std::cout << "\n\n����� ����� � ������ " << player.get_name() << ": " << player.GetValue() << std::endl;
    player.Bust();

    return 0;
}
