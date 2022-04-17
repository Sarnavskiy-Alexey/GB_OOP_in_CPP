#pragma once
#include "Pair.h"

template <class T4>
class StringValuePair :
    public Pair<std::string, T4>
{
public:
    StringValuePair(const std::string& field1, const T4& field2);
};
