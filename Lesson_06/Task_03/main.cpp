/*
3.  –еализовать класс Player, который наследует от класса GenericPlayer.
    ” этого класса будет 4 метода:

Х virtual bool IsHitting() const - реализаци€ чисто виртуальной функции
    базового класса. ћетод спрашивает у пользовател€, нужна ли ему еще
    одна карта и возвращает ответ пользовател€ в виде true или false.
Х void Win() const - выводит на экран им€ игрока и сообщение, что он
    выиграл.
Х void Lose() const - выводит на экран им€ игрока и сообщение, что он
    проиграл.
Х void Push() const - выводит на экран им€ игрока и сообщение, что он
    сыграл вничью.
*/

#include <iostream>
#include "Card.h"
#include "GenericPlayer.h"
#include "Hand.h"
#include "Player.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    std::string str_pl1 = " ол€";
    Player pl1(str_pl1);
    pl1.Win();
    pl1.Lose();
    pl1.Push();
    pl1.IsHitting();

    return 0;
}