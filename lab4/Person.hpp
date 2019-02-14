/******************************************************
	Oct 21, 2018

	Lab4 
	Yuxi Zhang

******************************************************/
#ifndef PERSON_HPP
#define PERSON_HPP
#include <iostream>
#include <string>
using std::string;
using std::ostream;

class Person
{
protected:
	string Name;
	int Age;

public:
	Person(string name, int age);
	virtual void do_work() = 0;
	virtual int getAge() = 0;
	virtual string getName() = 0;



};

#endif

/************************************************************
Notes1:
enum in base class, can not be accessed in derived class

Notes2: base class is abstract class, use member initialization list to initialize deribed class
************************************************************/