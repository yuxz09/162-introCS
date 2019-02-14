/******************************************************
	Oct 21, 2018

	Lab4 
	Yuxi Zhang

Description:
contains basic info of unverisity
constructor for initializing
getPeople to get all people in university
addnewbuilding to buildings
addnewperson to people
print information of all buildings
print information of all people
******************************************************/

#ifndef UNIVERSITY_HPP
#define UNIVERSITY_HPP
#include "Building.hpp"
#include "Person.hpp"
#include <string>
#include <vector>
using std::string;
using std::vector;


class University
{
private:
	const string name;
	vector<Building *> buildings;//n number of building objects
	vector<Person *> people;//n number of person objects
	int numberofbuildings;
	int numberofpeople;
	
public:
	University(const string n);
	vector<Person*> getPeople();//get vector of Person* from University class
	void addnewBuilding(Building *b);//add new building to vector of Building pointers
	void addnewPerson(Person *p);//add new person to vector of Person pointers
	void printInfo_building();//print all information of buildings
	void printInfo_people();//print all information of people
//	~University();
	
};

#endif