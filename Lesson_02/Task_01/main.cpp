#include <iostream>
#include "Person.h"
#include "Student.h"
#include <vector>

int main()
{
	int StudentCounter = 0;
	char answer = 'n';

	std::string name = "";
	int age = 0;
	double weight = 0.0;
	int yearStudy = 0;
	bool is_male = false;

	std::vector <Student> vector_students;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Enter name: ";
		std::cin >> name;
		std::cout << "Male?(1/0): ";
		std::cin >> is_male;
		std::cout << "Age: ";
		std::cin >> age;
		std::cout << "Weight: ";
		std::cin >> weight;
		std::cout << "Year of study: ";
		std::cin >> yearStudy;

		Student tmp(is_male);
		tmp.setAge(age);
		tmp.setName(name);
		tmp.setWeight(weight);
		tmp.setYearStudy(yearStudy);

		vector_students.push_back(tmp);
	}

	std::cout << "\nList of students:\n";

	for (int i = 0; i < 3; i++)
	{
		vector_students[i].printData();
	}

	return 0;
}