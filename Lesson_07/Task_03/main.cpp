/*
3.  Создать класс Deck, который наследует от класса Hand и представляет собой
    колоду карт. Класс Deck имеет 4 метода:

•  vold Populate() - Создает стандартную колоду из 52 карт, вызывается из
    конструктора.
•  void Shuffle() - Метод, который тасует карты, можно использовать функцию из
    алгоритмов STL random_shuffle
•  vold Deal (Hand& aHand) - метод, который раздает в руку одну карту
•  void AddltionalCards (GenericPlayer& aGenerlcPlayer) - раздает игроку
    дополнительные карты до тех пор, пока он может и хочет их получать

    Обратите внимание на применение полиморфизма. В каких методах применяется этот
    принцип ООП?
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

    // создание колоды
    Deck deck;
    deck.Shuffle();

    //создание игрока
    Player player("Алексей");

    deck.AdditionalCards(player);
    std::cout << "\n\nВсего очков у игрока " << player.get_name() << ": " << player.GetValue() << std::endl;
    player.Bust();

    return 0;
}
