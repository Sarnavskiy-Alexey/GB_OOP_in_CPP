/*
5.  Написать функцию main() к игре Блекджек. В этой функции вводятся имена игроков.
    Создается объект класса Game и запускается игровой процесс. Предусмотреть
    возможность повторной игры.
*/

#include <iostream>
#include <conio.h>

#include "Card.h"
#include "GenericPlayer.h"
#include "Hand.h"
#include "House.h"
#include "Player.h"
#include "Deck.h"
#include "Game.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    std::vector<std::string>players;
    int player_counter;
    std::cout << "Введите количество игроков: ";
    std::cin >> player_counter;

    for (int i = 0; i < player_counter; i++)
    {
        std::string str;
        std::cout << "Введите имя игрока №" << i + 1 << ": ";
        std::cin >> str;
        players.push_back(str);
    }

    char answer = '\0';
    do
    {
        system("cls");
        Game game(players);
        game.play();

        std::cin.clear();
        //std::cin.ignore(INT_MAX, '\n');
        std::cout << "Хотите продолжить игру?(n/y)";
        answer = _getche();
        game.~Game();
    } while (answer == 'y' || answer == 'Y');
    system("cls");

    return 0;
}
