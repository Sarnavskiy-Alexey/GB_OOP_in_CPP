#pragma once
template <class T1, class T2>
class Pair
{
private:
	T1 m_field1;
	T2 m_field2;
public:
	Pair(const T1& field1, const T2& field2);
	T1 first() const;
	T2 second() const;
};

