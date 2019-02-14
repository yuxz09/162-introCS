/***********************************************
** Date: Oct 15th, 2018
*

* Name: Yuxi Zhang
* VERSION 2.0
* Description:
* Base class for animals
* basic information
* growUp(): all animals' age add 1 day
* virtual:
* feed(): feed animals and reduce cost
* getCost(): how much need to buy one animal
* getNumberofBabies():how many childs of each time when give birth
* addPayoff(): get payoff from one animal each day
* setAdultage(): when buy an adult, set its age as 3, override default one, age = 1;
* 

************************************************/
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
protected:
	int Age;
	int Cost;
	int NumberofBabies;
	int BaseFoodCost;
	int Payoff;

public:
	Animal();
	Animal(int age, int cost, int numberofbabies, int basefoodcost, int payoff);
	virtual int getAge() = 0;
	void growUp();
	virtual void feed() = 0;
	virtual int getNumberofBabies() = 0;
	virtual void addPayoff() = 0;
	void setAdultage(int age);
	virtual int getPayoff() = 0;



};

#endif