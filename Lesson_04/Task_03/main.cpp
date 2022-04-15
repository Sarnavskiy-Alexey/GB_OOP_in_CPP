/*
3.  ����������� ����� Hand, ������� ������������ ����� ��������� ����. � ������ �����
	���� ����: ������ ���������� ���� (������ ������������ ������, �.�. ��� �� ����
	������������ ������, � ��� ��� ��������� ������ ���� - ��������� �� ������� ������
	Card). ����� � ������ Hand ������ ���� 3 ������:

	� ����� Add, ������� ��������� � ��������� ���� ����� �����, �������������� ��
	  ��������� � �������� ��������� ��������� �� ����� �����
	� ����� Clear, ������� ������� ���� �� ����
	� ����� GetValue, ������� ���������� ����� ����� ���� ���� (����� �������������
	  ����������� ����, ��� ��� ����� ���� ����� 11).
*/

#include <iostream>
#include "Hand.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));

	Hand* hand = new Hand;
	for (int i = 0; i < 4; i++)
	{
		CardSuit suit = static_cast<CardSuit>(rand() % 4 + 1);
		CardValue value = static_cast<CardValue>(rand() % 10 + 1);
		Card* card = new Card(suit, value);
		std::cout << "��������� ����� ����� " << static_cast<int>(suit) << " ��������� " << static_cast<int>(value) << std::endl;
		hand->Add(card);
	}

	std::cout << "� ���� ����� �����: " << hand->GetValue();
	delete hand;

	return 0;
}
