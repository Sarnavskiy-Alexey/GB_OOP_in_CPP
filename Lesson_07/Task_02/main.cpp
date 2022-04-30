/*
2. �� ������� ���������� ������ �������� ��� ����� ��������� date1 � date2.

�   �������� �������, ������� ��������� � �������� ��������� ��� ����� ���������
    ���� Date � ���������� �� ����� ����� (��������� ���������� �� �����).
    ������� ������ ������� ����� ������� ����.

�   �������� �������, ������� ���������� ��������� (������) ��� ����� ���������,
    ���������� � ������� � �������� ����������.

����������: �������� ��������, ��� ������ ������� �� ������ ���������� �������, ���������� �� � �������� ����������.
*/

#include "pch.h"
#include "Date.h"

// ��������� ���
Date& latestDate(std::shared_ptr<Date>& date1, std::shared_ptr<Date>& date2)
{
    return ( *date1 < *date2 ) ? *date2 : ((*date1 == *date2) ? *date1 : *date1);
}

// ����� ���
void changeDates(std::shared_ptr<Date>& date1, std::shared_ptr<Date>& date2)
{
    std::shared_ptr<Date> tmp_date = date1;
    date1 = date2;
    date2 = tmp_date;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    time_t seconds = time(0);
    tm* seconds_today = localtime(&seconds);
    
    std::shared_ptr<Date> date1 = std::make_shared<Date>(*seconds_today);
    std::shared_ptr<Date> date2 = std::make_shared<Date>(18, 4, 1922);

    std::cout << "������ �����:\n";
    std::cout << latestDate(date1, date2);

    std::cout << "\n--------------------------\n";

    std::cout << "������ �����:\n";
    std::cout << "�� ������:\n";
    std::cout << *date1 << std::endl << *date2;
    changeDates(date1, date2);
    std::cout << "\n\n����� ������:\n";
    std::cout << *date1 << std::endl << *date2;

    return 0;
}
