#include "Date.h"

Date::Date()
{
	m_day = 1;
	m_month = 0;
	m_year = 1970;
}

Date::Date(tm today)
{
	m_day = today.tm_mday;
	m_month = today.tm_mon;
	m_year = today.tm_year + 1900;
}

Date::Date(UI_16 day, UI_16 month, int year)
{
	this->set_date(day, month, year);
}

UI_16 Date::get_day() const
{
	return m_day;
}

UI_16 Date::get_month() const
{
	return m_month;
}

int Date::get_year() const
{
	return m_year;
}

std::ostream& operator<< (std::ostream& _Ostr, const Date& _date)
{
	_Ostr << "ƒень: " << _date.get_day();
	_Ostr << "\nћес€ц: " << months_to_print[_date.get_month()];
	_Ostr << "\n√од: " << _date.get_year();

	return _Ostr;
}

bool operator< (const Date& date1, const Date& date2)
{
	if (date1.get_year() < date2.get_year())
	{
		return true;
	}
	else if (date1.get_month() < date2.get_month())
	{
		return true;
	}
	else if (date1.get_day() < date2.get_day())
	{
		return true;
	}

	return false;
}

bool operator== (const Date& date1, const Date& date2)
{
	if (date1.get_year() == date2.get_year() && (date1.get_month() == date2.get_month()) && (date1.get_day() == date2.get_day()))
	{
		return true;
	}

	return false;
}

void Date::set_date(UI_16 day, UI_16 month, int year)
{
	m_day = day;
	m_month = month - 1;
	m_year = year;

	switch (month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		{
			if (day < 1 || day > 31)
			{
				std::cout << "ќшибка! ”казан некорректный день! ƒень назначен по умолчанию!";
				m_day = 1;
			}

			break;
		}
	case 4: case 6: case 9: case 11:
		{
			if (day < 1 || day > 30)
			{
				std::cout << "ќшибка! ”казан некорректный день! ƒень назначен по умолчанию!";
				m_day = 1;
			}

			break;
		}
	case 2:
		{
			// если (год високосный и неправильный день) или (год невисокосный и неправильный день)
			if ((((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) && (day < 1 || day > 29)) ||
				(day < 1 || day > 28))
			{
				std::cout << "ќшибка! ”казан некорректный день! ƒень назначен по умолчанию!";
				m_day = 1;
			}

			break;
		}
	default:
		{
			std::cout << "ќшибка! ”казан некорректный мес€ц! ћес€ц назначен по умолчанию!";
			m_month = 0;
		}
	}
}