/******************************************************
	Oct 21, 2018

	Lab4 
	Yuxi Zhang
Description:
contains basic info of instructors
getter for outside class, name, age, rating
do_work
overloaded <<
******************************************************/
#ifndef INSTRUCTOR_HPP
#define INSTRUCTOR_HPP
#include "Person.hpp"
#include <iostream>
using std::ostream;

class Instructor : public Person
{
private:
	double Rating;
public:
	Instructor(string name, int age, double rating);
	virtual int getAge() override;
	virtual string getName() override;
	double getRating();
	virtual void do_work() override;

	friend ostream& operator<<(ostream& out, Instructor& instructor);

	
};

#endif