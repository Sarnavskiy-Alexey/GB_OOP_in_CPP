/*
5.  Написать перегрузку оператора вывода для класса Card. Если карта
    перевернута рубашкой вверх (мы ее не видим), вывести ХХ, если мы ее
    видим, вывести масть и номинал карты. Также для класса GenericPlayer
    написать перегрузку оператора вывода, который должен отображать имя
    игрока и его карты, а также общую сумму очков его карт.
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
        std::cout << "Добавлена карта масти " << static_cast<int>(suit) << " значением " << static_cast<int>(value) << std::endl;
        
        std::cout << "Карта невидимая: " << *card << std::endl;
        card->Flip();
        std::cout << "Карта видимая: " << *card << std::endl << std::endl;
        
        // для добавления невидимых карт в руку Дилера. При выводе на
        // экран будут XX вместо масти и значения
        //card->Flip();

        house.Add(card);
    }

    std::cout << "У дилера: " << house.GetValue() << " очков." << std::endl;
    house.Bust();

    std::cout << house;

    return 0;
}
