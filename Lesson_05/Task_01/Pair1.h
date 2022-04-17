#pragma once
template <class T>
class Pair1
{
private:
	T m_field1;
	T m_field2;
public:
	Pair1(const T& field1, const T& field2);
	T first() const;
	T second() const;
};
