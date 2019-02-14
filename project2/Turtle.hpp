/***********************************************
** Date: Oct 15th, 2018
*
*
*
* 

* Name: Yuxi Zhang
* VERSION 1.0


************************************************/
#ifndef TURTLE_HPP
#define TURTLE_HPP
#include "Animal.hpp"

class Turtle : public Animal
{
public:
	Turtle();
	Turtle(int age, int cost, int numberofbabies, int basefoodcost, int payoff); 
	virtual int getAge() override;
//		: Animal(age)//call animal constructor with values

	int getCost();
	//feed animal, override
	virtual void feed() override; 

	virtual int getNumberofBabies() override;
	virtual void addPayoff() override;
	void setAge(int age);
	void setCost(int cost);
	void setNumberofBabies(int numberofbabies);

	void setPayoff(int payoff);
	virtual int getPayoff() override;

};

#endif