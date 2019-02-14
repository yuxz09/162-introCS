/***********************************************
** Date: Oct 15th, 2018
*
*
*
* 

* Name: Yuxi Zhang
* VERSION 2.0


************************************************/
#include <iostream>
#include "Tiger.hpp"
#include "Zoo.hpp"//access: Money
#include "Animal.hpp"
using std::cout;
using std::endl;

Tiger::Tiger()
{
	
}
Tiger::Tiger(int age, int cost, int numberofbabies, int basefoodcost, int payoff) 
	: Animal(1, 10000, 1, 50, 2000)
{
}



int Tiger::getAge()
{
	return Age;
}

int Tiger::getCost()
{
	return Cost;
}


void Tiger::feed()
{
	Zoo::Money -= BaseFoodCost;
}

int Tiger::getNumberofBabies() 
{
	return NumberofBabies;
}


void Tiger::addPayoff()
{
	Zoo::Money += Payoff;
}


int Tiger::getPayoff()
{
	return Payoff;
}


//payoff: extra money
void Tiger::addExtraPayoff(int payoff)
{
	Zoo::Money += payoff;
}

void Tiger::setAge(int age)
{
	Age = age;
}

void Tiger::setCost(int cost)
{
	Cost = cost;
}

void Tiger::setNumberofBabies(int numberofbabies) 
{
	NumberofBabies = numberofbabies;
}

void Tiger::setPayoff(int payoff) 
{
	Payoff = payoff;
}
