/*
2.  Создать собственный манипулятор endll для стандартного потока вывода,
    который выводит два перевода строки и сбрасывает буфер.
*/

#include <iostream>

template <class _Elem, class _Traits>
std::basic_ostream<_Elem, _Traits>& endll(std::basic_ostream<_Elem, _Traits>& _Ostr)
{
    _Ostr.put(_Ostr.widen('\n'));
    _Ostr.put(_Ostr.widen('\n'));
    _Ostr.flush();

    return _Ostr;
}

int main()
{
    std::cout << "New string and two ends of line." << endll;
    std::cout << "New string";

    return 0;
}
