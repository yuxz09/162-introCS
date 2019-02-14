/***********************************************
** Date: Oct 15th, 2018
*
*
*
* 

* Name: Yuxi Zhang
* VERSION 1.0


************************************************/
#ifndef PENGUIN_HPP
#define PENGUIN_HPP
#include "Animal.hpp"

class Penguin : public Animal
{

public:
	Penguin();
	Penguin(int age, int cost, int numberofbabies, int basefoodcost, int payoff);
	virtual int getAge() override;
//		: Animal(age)//call animal constructor with values

	//feed animal, override
	virtual void feed() override;

	virtual int getNumberofBabies() override;
	int getCost();
	virtual void addPayoff() override;
	void setAge(int age);
	void setCost(int cost);
	void setNumberofBabies(int numberofbabies);
	void setPayoff(int payoff);
	virtual int getPayoff() override;
//	virtual ~Penguin() override;

};

#endif