/*
4.  Реализовать класс House, который представляет дилера. Этот класс
    наследует от класса GenericPlayer. У него есть 2 метода:

• virtual bool IsHitting() const - метод указывает, нужна ли дилеру еще
    одна карта. Если у дилера не больше 16 очков, то он берет еще одну
    карту.
• void FlipFirstCard() - метод переворачивает первую карту дилера.
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
        std::cout << "Добавлена карта масти " << static_cast<int>(suit) << " значением " << static_cast<int>(value) << std::endl;
        house.Add(card);
    }

    std::cout << "У дилера: " << house.GetValue() << " очков." << std::endl;
    house.Bust();

    house.FlipFirstCard();

    // вызов метода GetValue в этот раз показывает, что метод FlipFirstCard
    // действительно переворачивает первую карту дилера, так как в методе
    // GetValue переворачиваются все карты для подсчета (не важно лицом
    // они вниз или вверх)
    std::cout << "У дилера без первой карты: " << house.GetValue() << " очков." << std::endl;

    return 0;
}