/*
2.  ������� ����� Car (����������) � ������ company (��������) � model (������).
    ������-����������: PassengerCar (�������� ����������) � Bus (�������). �� ����
    ������� ��������� ����� Minivan (�������). ������� ������������ ��� ������� ��
    �������, ����� ��� �������� ������ � �������. ������� ������� ��� ������� ��
    ������� � ����������, � ����� ������������������ ����������� ������������.
    �������� �������� �� �������� ������ ������.

����������: ���� ������������ ����������� ������� �����, �� ������ ������ "��������"
�������� ������ ������� ����� "��������" �����.
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