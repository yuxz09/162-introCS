/***********************************************
** Date: Oct 15th, 2018
*
*
*
* 

* Name: Yuxi Zhang
* VERSION 1.0


************************************************/
#include <iostream>
#include "Zoo.hpp"
#include "Penguin.hpp"
#include "Animal.hpp"
using std::cout;
using std::endl;

Penguin::Penguin() 
{
	
}


Penguin::Penguin(int age, int cost, int numberofbabies, int basefoodcost, int payoff) 
	: Animal(1, 1000, 5, 10, 100)
{
}




int Penguin::getAge()
{
	return Age;
}

void Penguin::setAge(int age)
{
	Age = age;
}


void Penguin::setCost(int cost)
{
	Cost = cost;
}

int Penguin::getCost()
{
	return Cost;
}

void Penguin::feed()
{
	Zoo::Money -= BaseFoodCost;
}

void Penguin::addPayoff()
{
	Zoo::Money += Payoff;
}

int Penguin::getNumberofBabies() 
{
	return NumberofBabies;
}

void Penguin::setNumberofBabies(int numberofbabies) 
{
	NumberofBabies = numberofbabies;
}

void Penguin::setPayoff(int payoff) 
{
	Payoff = payoff;
}

int Penguin::getPayoff()
{
	return Payoff;
}






