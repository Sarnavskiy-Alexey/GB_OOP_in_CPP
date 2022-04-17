#include "Pair.h"
template <class T1, class T2>
Pair<T1, T2>::Pair(const T1& field1, const T2& field2)
{
	this->m_field1 = field1;
	this->m_field2 = field2;
}

template <class T1, class T2>
T1 Pair<T1, T2>::first() const
{
	return this->m_field1;
}
template <class T1, class T2>
T2 Pair<T1, T2>::second() const
{
	return this->m_field2;
}

template <class T3>
Pair<std::string, T3>::Pair()
{
}

template <class T3>
Pair<std::string, T3>::Pair(const std::string& field1, const T3& field2)
{
	this->m_field3 = field1;
	this->m_field4 = field2;
}

template <class T3>
std::string Pair<std::string, T3>::first() const
{
	return this->m_field3;
}

template <class T3>
T3 Pair<std::string, T3>::second() const
{
	return this->m_field4;
}
