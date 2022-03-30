#pragma once
#include "Person.h"
class Student :
    public Person
{
private:
    int yearStudy = 0;
public:
    Student(bool is_male);
    void setYearStudy(int yearStudy);
    void incYearStudy();
    void printData();
};
