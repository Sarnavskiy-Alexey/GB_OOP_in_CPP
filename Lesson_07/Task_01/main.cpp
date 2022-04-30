/*
1.  Создайте класс Date с полями день, месяц, год и методами доступа к этим полям.
    Перегрузите оператор вывода для данного класса. Создайте два "умных" указателя
    today и date. Первому присвойте значение сегодняшней даты. Для него вызовите
    по отдельности методы доступа к полям класса Date, а также выведите на экран
    данные всего объекта с помощью перегруженного оператора вывода. Затем
    переместите ресурс, которым владеет указатель today в указатель date.
    Проверьте, являются ли нулевыми указатели today и date и выведите
    соответствующую информацию об этом в консоль.
*/

#include "pch.h"
#include "Date.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    time_t seconds = time(0);
    tm* seconds_today = localtime(&seconds);
    
    std::shared_ptr<Date> today = std::make_shared<Date>(*seconds_today);
    std::cout << "\n\tПо методам доступа к полям:\nДень: " << today->get_day();
    std::cout << "\nМесяц: " << months_to_print[today->get_month()];
    std::cout << "\nГод: " << today->get_year();
    std::cout << "\n\n\tПерегруженный оператор вывода:\n" << *today;
    std::cout << "\n-----------------------------------------\n";

    std::shared_ptr<Date> date;

    std::cout << "До перемещения shared_ptr:\n";
    std::cout << ((today == nullptr) ? "Указатель на today - нулевой!\n" : "Указатель на today - ненулевой!\n");
    std::cout << ((date == nullptr) ? "Указатель на date - нулевой!\n" : "Указатель на date - ненулевой!\n");
    std::cout << "\n-----------------------------------------\n";

    date = today;

    std::cout << "После перемещения shared_ptr:\n";
    std::cout << ((today == nullptr) ? "Указатель на today - нулевой!\n" : "Указатель на today - ненулевой!\n");
    std::cout << ((date == nullptr) ? "Указатель на date - нулевой!\n" : "Указатель на date - ненулевой!\n");

    return 0;
}
