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
#include "Animal.hpp"
#include "Turtle.hpp"
using std::cout;
using std::endl;
Turtle::Turtle()
{
	
}

Turtle::Turtle(int age, int cost, int numberofbabies, int basefoodcost, int payoff) 
	: Animal(1, 100, 10, 5, 5)
{

}



void Turtle::feed()
{
	Zoo::Money -= BaseFoodCost;
}

int Turtle::getAge()
{
	return Age;
}

void Turtle::setAge(int age)
{
	Age = age;
}

int Turtle::getCost()
{
	return Cost;
}

void Turtle::setCost(int cost)
{
	Cost = cost;
}

int Turtle::getNumberofBabies() 
{
	return NumberofBabies;
}

void Turtle::setNumberofBabies(int numberofbabies) 
{
	NumberofBabies = numberofbabies;
}


void Turtle::addPayoff()
{
	Zoo::Money += Payoff;
}

void Turtle::setPayoff(int payoff) 
{
	Payoff = payoff;
}

int Turtle::getPayoff()
{
	return Payoff;
}


