/*
3.  ����������� ����� Player, ������� ��������� �� ������ GenericPlayer.
    � ����� ������ ����� 4 ������:

� virtual bool IsHitting() const - ���������� ����� ����������� �������
    �������� ������. ����� ���������� � ������������, ����� �� ��� ���
    ���� ����� � ���������� ����� ������������ � ���� true ��� false.
� void Win() const - ������� �� ����� ��� ������ � ���������, ��� ��
    �������.
� void Lose() const - ������� �� ����� ��� ������ � ���������, ��� ��
    ��������.
� void Push() const - ������� �� ����� ��� ������ � ���������, ��� ��
    ������ ������.
*/

#include <iostream>
#include "Card.h"
#include "GenericPlayer.h"
#include "Hand.h"
#include "Player.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    std::string str_pl1 = "����";
    Player pl1(str_pl1);
    pl1.Win();
    pl1.Lose();
    pl1.Push();
    pl1.IsHitting();

    return 0;
}