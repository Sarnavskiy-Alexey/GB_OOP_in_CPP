/*
2. По условию предыдущей задачи создайте два умных указателя date1 и date2.

•   Создайте функцию, которая принимает в качестве параметра два умных указателя
    типа Date и сравнивает их между собой (сравнение происходит по датам).
    Функция должна вернуть более позднюю дату.

•   Создайте функцию, которая обменивает ресурсами (датами) два умных указателя,
    переданных в функцию в качестве параметров.

Примечание: обратите внимание, что первая функция не должна уничтожать объекты, переданные ей в качестве параметров.
*/

#include "pch.h"
#include "Date.h"

// сравнение дат
Date& latestDate(std::shared_ptr<Date>& date1, std::shared_ptr<Date>& date2)
{
    return ( *date1 < *date2 ) ? *date2 : ((*date1 == *date2) ? *date1 : *date1);
}

// обмен дат
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

    std::cout << "Первый пункт:\n";
    std::cout << latestDate(date1, date2);

    std::cout << "\n--------------------------\n";

    std::cout << "Второй пункт:\n";
    std::cout << "До обмена:\n";
    std::cout << *date1 << std::endl << *date2;
    changeDates(date1, date2);
    std::cout << "\n\nПосле обмена:\n";
    std::cout << *date1 << std::endl << *date2;

    return 0;
}
