/******************************************************
	Oct 21, 2018

	Lab4 
	Yuxi Zhang

******************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "Instructor.hpp"
#include "Person.hpp"
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::ostream;

//default constructor 
Instructor::Instructor(string name, int age, double rating)
	: Person(name, age), Rating(rating)
{

}


string Instructor::getName() 
{
	return Name;

}

int Instructor::getAge() 
{
	return Age;
}

double Instructor::getRating() 
{
	return Rating;
}

void Instructor::do_work()
{
	int rand_hour = rand() % 5;
	cout << Name << " graded papers for " << rand_hour << " hours." << endl;
}

//overloaded operator <<
ostream& operator<<(ostream &out, Instructor& instructor)
{
	out << "Instructor's name: " << instructor.getName()
	    << "\n Instructor's age: " << instructor.getAge() 
	    << "\n Instructor's rating: " << instructor.getRating();
   	return out;
}



