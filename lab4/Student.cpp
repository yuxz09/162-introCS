/******************************************************
	Oct 21, 2018

	Lab4 
	Yuxi Zhang

******************************************************/
#include <iostream>
#include "Student.hpp"
#include "Person.hpp"
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::ostream;

Student::Student(string name, int age, double gpa)
	: Person(name, age), GPA(gpa)
{
	

}


double Student::getGpa()
{
	return GPA;	
}

int Student::getAge()
{
	return Age;

}

string Student::getName()
{
	return Name;
}

void Student::do_work()
{
	srand(time(0));
	int rand_hour = rand() % 5;
	cout << Name << " did " << rand_hour << " hours of homework." << endl;
}

//overloaded operator
ostream& operator<<(ostream& out, Student& student)
{
	out << "Student's name: " << student.Name
		<< "\n Student's age: " << student.Age
    	<< "\n Student's GPA: " << student.GPA;
    return out;
}





