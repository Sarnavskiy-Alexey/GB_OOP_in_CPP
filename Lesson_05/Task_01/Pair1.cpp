#include "Pair1.h"

template <typename T>
Pair1<T>::Pair1(const T& field1, const T& field2)
{
	m_field1 = field1;
	m_field2 = field2;
}

template <typename T>
T Pair1<T>::first() const
{
	return m_field1;
}

template <typename T>
T Pair1<T>::second() const
{
	return m_field2;
}