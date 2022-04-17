#pragma once
#include <iostream>

template <class T1, class T2>
class Pair
{
public:
	T1 m_field1;
	T2 m_field2;
public:
	Pair(const T1& field1, const T2& field2);
	T1 first() const;
	T2 second() const;
};

template <class T3>
class Pair<std::string, T3>
{
public:
	std::string m_field3;
	T3 m_field4;
public:
	Pair();
	Pair(const std::string& field1, const T3& field2);
	std::string first() const;
	T3 second() const;
};
