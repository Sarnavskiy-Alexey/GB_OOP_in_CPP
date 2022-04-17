#include "StringValuePair.h"

template <class T4>
StringValuePair<T4>::StringValuePair(const std::string& field1, const T4& field2)
{
	this->m_field3 = field1;
	this->m_field4 = field2;
}