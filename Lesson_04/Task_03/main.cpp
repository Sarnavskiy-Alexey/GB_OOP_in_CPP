/*
3.  Реализовать класс Hand, который представляет собой коллекцию карт. В классе будет
	одно поле: вектор указателей карт (удобно использовать вектор, т.к. это по сути
	динамический массив, а тип его элементов должен быть - указатель на объекты класса
	Card). Также в классе Hand должно быть 3 метода:

	• метод Add, который добавляет в коллекцию карт новую карту, соответственно он
	  принимает в качестве параметра указатель на новую карту
	• метод Clear, который очищает руку от карт
	• метод GetValue, который возвращает сумму очков карт руки (здесь предусмотреть
	  возможность того, что туз может быть равен 11).
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
		std::cout << "Добавлена карта масти " << static_cast<int>(suit) << " значением " << static_cast<int>(value) << std::endl;
		hand->Add(card);
	}

	std::cout << "В руке сумма очков: " << hand->GetValue();
	delete hand;

	return 0;
}
