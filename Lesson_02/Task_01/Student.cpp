#include "Student.h"

Student::Student(bool is_male)
{
	this->is_male = is_male;
}

void Student::setYearStudy(int yearStudy)
{
	this->yearStudy = yearStudy;
}

void Student::incYearStudy()
{
	this->yearStudy++;
}

void Student::printData()
{
	std::cout << "\tName: " << name << std::endl
		<< "\tAge: " << age << std::endl
		<< "\tSex: " << (is_male ? "Male" : "Female") << std::endl
		<< "\tWeight: " << age << std::endl
		<< "\tYear of Study:" << yearStudy << std::endl;
}
