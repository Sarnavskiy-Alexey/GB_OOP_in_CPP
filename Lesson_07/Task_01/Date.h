#pragma once

#include "pch.h"

typedef unsigned short UI_16;		// ��� ���������� ������

const std::string months_to_print[] = { "������", "�������", "����", "������", "���", "����", "����", "������", "��������", "�������", "������", "�������" };

class Date
{
private:
	UI_16 m_day;
	UI_16 m_month;
	int m_year;
public:
	Date();
	Date(tm today);

	UI_16 get_day() const;
	UI_16 get_month() const;
	int get_year() const;

	friend std::ostream& operator<< (std::ostream& _Ostr, const Date& _date);
};

