#include "Pair.h"
template <class T1, class T2>
Pair<T1, T2>::Pair(const T1& field1, const T2& field2)
{
	m_field1 = field1;
	m_field2 = field2;
}

template <class T1, class T2>
T1 Pair<T1, T2>::first() const
{
	return m_field1;
}
template <class T1, class T2>
T2 Pair<T1, T2>::second() const
{
	return m_field2;
}