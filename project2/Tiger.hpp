/***********************************************
** Date: Oct 15th, 2018
*
*
*
* 

* Name: Yuxi Zhang
* VERSION 2.0


************************************************/
#ifndef TIGER_HPP
#define TIGER_HPP
#include "Animal.hpp"

class Tiger : public Animal
{	
public:
	Tiger();
	Tiger(int age, int cost, int numberofbabies, int basefoodcost, int payoff); 
	virtual int getAge() override;
	void setAge(int age);
	int getCost();
	void setCost(int cost);

	virtual void feed() override; 
	virtual int getNumberofBabies() override;
	void setNumberofBabies(int numberofbabies);


	virtual void addPayoff() override;
	virtual int getPayoff() override;
	void setPayoff(int payoff);
	void addExtraPayoff(int payoff);


};

#endif