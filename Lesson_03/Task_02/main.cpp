/*
2.  Создать класс Car (автомобиль) с полями company (компания) и model (модель).
    Классы-наследники: PassengerCar (легковой автомобиль) и Bus (автобус). От этих
    классов наследует класс Minivan (минивэн). Создать конструкторы для каждого из
    классов, чтобы они выводили данные о классах. Создать объекты для каждого из
    классов и посмотреть, в какой последовательности выполняются конструкторы.
    Обратить внимание на проблему «алмаз смерти».

Примечание: если использовать виртуальный базовый класс, то объект самого "верхнего"
базового класса создает самый "дочерний" класс.
*/

#include <iostream>
#include "Car.h"
#include "PassengerCar.h"
#include "Bus.h"
#include "Minivan.h"

int main()
{
    std::cout << "Creation of object Car-class:" << std::endl;
    Car car;
    std::cout << std::endl << "Creation of object Bus-class:" << std::endl;
    Bus bus;
    std::cout << std::endl << "Creation of object PassengerCar-class:" << std::endl;
    PassengerCar passenger_car;
    std::cout << std::endl << "Creation of object Minivan-class:" << std::endl;
    Minivan minivan;

    return 0;
}