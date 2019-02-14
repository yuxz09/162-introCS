/******************************************************
	Oct 21, 2018

	Lab4 
	Yuxi Zhang


******************************************************/
#include "University.hpp"
#include "Building.hpp"
#include "Person.hpp"
#include "Instructor.hpp"
#include "Student.hpp"
#include <iostream>
#include <vector>
#include <iomanip> 
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::setprecision;

//n: name
//b:buildings
//p:people
University::University(const string n)
	:name("Oregon State University")
{


}

void University::addnewBuilding(Building *b)
{
	buildings.push_back(b);
}

void University::addnewPerson(Person *p)
{
	people.push_back(p);
}

void University::printInfo_building()
{
	for (auto i = buildings.begin(); i != buildings.end(); i++)
	{
		cout << "building named: " << (*i) -> getName() << endl;
		cout << "building's size: " << (*i) -> getSize() << endl;
		cout << "building's address: " << (*i) -> getAddress() << endl;
	}
}

//Person *p: array of Person objects
//p[i] a Person object, but not a Person pointer
//Person **p: a pointer points to an array of Person object
void University::printInfo_people()
{
	for (auto i = people.begin(); i != people.end(); i++)
	{
		Instructor *instructor = dynamic_cast<Instructor*>(*i);
		if (instructor)
		{
			cout << "instructor's name: " << instructor -> getName() << endl;
			cout << "instructor's age: " << instructor -> getAge() << endl;
			cout << "instructor's rating: " << setprecision(2) << instructor -> getRating() << endl;
		}
		else
		{
			Student *student = dynamic_cast<Student*>(*i);
			cout << "student's name: " << student -> getName() << endl;
			cout << "student's age: " << student -> getAge() << endl;
			cout << "student's Gpa: " << setprecision(2) << student -> getGpa() << endl;			
		}
	}	
}



vector<Person*> University::getPeople()
{
	return people;

}
/*************
University::~University()
{
	for (int i = buildings.size() - 1; i >= 0; i--)
	{
		delete buildings[i];
		buildings.pop_back();
	}
	for (int i = 0; i < people.size(); i++)
	{
		delete people[i];
		people.pop_back();
	}
}
*************/
