#include "Person.h"

Person::Person()
{

}

Person::Person(bool is_male)
{
	this->is_male = is_male;
}

void Person::setName(std::string name)
{
	this->name = name;
}

void Person::setAge(int age)
{
	this->age = age;
}

void Person::setWeight(double weight)
{
	this->weight = weight;
}
