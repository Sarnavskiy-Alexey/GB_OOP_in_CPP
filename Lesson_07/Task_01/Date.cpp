#include "Date.h"

Date::Date()
{
	m_day = 1;
	m_month = 1;
	m_year = 1970;
}

Date::Date(tm today)
{
	m_day = today.tm_mday;
	m_month = today.tm_mon;
	m_year = today.tm_year + 1900;
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
	_Ostr << "Äåíü: " << _date.get_day();
	_Ostr << "\nÌåñÿö: " << months_to_print[_date.get_month()];
	_Ostr << "\nÃîä: " << _date.get_year();

	return _Ostr;
}
