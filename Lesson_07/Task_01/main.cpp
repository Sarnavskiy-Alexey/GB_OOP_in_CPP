/*
1.  �������� ����� Date � ������ ����, �����, ��� � �������� ������� � ���� �����.
    ����������� �������� ������ ��� ������� ������. �������� ��� "�����" ���������
    today � date. ������� ��������� �������� ����������� ����. ��� ���� ��������
    �� ����������� ������ ������� � ����� ������ Date, � ����� �������� �� �����
    ������ ����� ������� � ������� �������������� ��������� ������. �����
    ����������� ������, ������� ������� ��������� today � ��������� date.
    ���������, �������� �� �������� ��������� today � date � ��������
    ��������������� ���������� �� ���� � �������.
*/

#include "pch.h"
#include "Date.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    time_t seconds = time(0);
    tm* seconds_today = localtime(&seconds);
    
    std::shared_ptr<Date> today = std::make_shared<Date>(*seconds_today);
    std::cout << "\n\t�� ������� ������� � �����:\n����: " << today->get_day();
    std::cout << "\n�����: " << months_to_print[today->get_month()];
    std::cout << "\n���: " << today->get_year();
    std::cout << "\n\n\t������������� �������� ������:\n" << *today;
    std::cout << "\n-----------------------------------------\n";

    std::shared_ptr<Date> date;

    std::cout << "�� ����������� shared_ptr:\n";
    std::cout << ((today == nullptr) ? "��������� �� today - �������!\n" : "��������� �� today - ���������!\n");
    std::cout << ((date == nullptr) ? "��������� �� date - �������!\n" : "��������� �� date - ���������!\n");
    std::cout << "\n-----------------------------------------\n";

    date = today;

    std::cout << "����� ����������� shared_ptr:\n";
    std::cout << ((today == nullptr) ? "��������� �� today - �������!\n" : "��������� �� today - ���������!\n");
    std::cout << ((date == nullptr) ? "��������� �� date - �������!\n" : "��������� �� date - ���������!\n");

    return 0;
}
