/*
1.  Создать абстрактный класс Figure(фигура). Его наследниками являются классы
    Parallelogram(параллелограмм) и Circle(круг).Класс Parallelogram — базовый для
    классов Rectangle(прямоугольник), Square(квадрат), Rhombus(ромб).Для всех классов
    создать конструкторы.Для класса Figure добавить чисто виртуальную функцию area()
    (площадь).Во всех остальных классах переопределить эту функцию, исходя из
    геометрических формул нахождения площади.
*/

#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Rhombus.h"
#include "Square.h"

int main()
{
    Circle circle;
    double radius
        ;
    Parallelogram parallelogram;
    double p_a, ha;

    Rectangle rectangle;
    double rec_a, rec_b;

    Rhombus rhombus;
    double d1, d2;

    Square square;
    double length;

    std::cout << "Enter circle radius: ";
    std::cin >> radius;
    circle.setRadius(radius);
    std::cout << "Circle area is: " << circle.area() << std::endl;

    std::cout << "Enter parallelogram side: ";
    std::cin >> p_a;
    std::cout << "Enter parallelogram height to this side: ";
    std::cin >> ha;
    parallelogram.setSides(p_a, ha);
    std::cout << "Parallelogram area is: " << parallelogram.area() << std::endl;

    std::cout << "Enter rectangle side a: ";
    std::cin >> rec_a;
    std::cout << "Enter rectangle side b: ";
    std::cin >> rec_b;
    rectangle.setSides(rec_a, rec_b);
    std::cout << "Rectangle area is: " << rectangle.area() << std::endl;

    std::cout << "Enter rhombus diagonal 1: ";
    std::cin >> d1;
    std::cout << "Enter rhombus diagonal 2: ";
    std::cin >> d2;
    rhombus.setDiags(d1, d2);
    std::cout << "Rhombus area is: " << rhombus.area() << std::endl;

    std::cout << "Enter square side: ";
    std::cin >> length;
    square.setLength(length);
    std::cout << "Square area is: " << square.area() << std::endl;

	return 0;
}