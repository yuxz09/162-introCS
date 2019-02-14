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
using std::cin;
using std::cout;
using std::endl;
#include "Animal.hpp"

//initialize const variable(not assign!)
// you can never assign to a const object!
// A const variable is initialized once and its value cannot change.
 
Animal::Animal()
{

}



Animal::Animal(int age, int cost, int numberofbabies, int basefoodcost, int payoff)
	: Age(age), Cost(cost), NumberofBabies(numberofbabies), BaseFoodCost(basefoodcost), Payoff(payoff)
{

}

int Animal::getAge()
{

}

void Animal::growUp()
{
	Age++;
}


int Animal::getNumberofBabies()
{

}

void Animal::feed()
{
   
}

void Animal::addPayoff()
{

}


int Animal::getPayoff()
{

}
void Animal::setAdultage(int age)
{
	Age = age;

}

