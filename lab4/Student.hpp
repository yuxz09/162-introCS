/******************************************************
	Oct 21, 2018

	Lab4 
	Yuxi Zhang

Description:
contains basic info of student
getter for outside class, name, age, gpa
do_work
overloaded <<
******************************************************/
#ifndef STUDENT_HPP
#define STUDENT_HPP
#include "Person.hpp"
using std::ostream;


//notes1: public not Public
class Student : public Person
{
private:
	double GPA;
public:
	Student(string name, int age, double gpa);
	virtual void do_work() override;
	double getGpa();
	virtual int getAge() override;
	virtual string getName() override;
	friend ostream& operator<<(ostream& out, Student &student);

};

#endif