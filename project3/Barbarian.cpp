#include "Barbarian.hpp"
#include <iostream>
using std::string;
using std::cout;
using std::endl;


//roll1: get number from rolling dice 1
//roll2: get number from rolling dice 2
Barbarian::Barbarian()
{
//	alive = true;
	strength = 12;
}

string Barbarian::getName()
{
	return "Barbarian";
}

int Barbarian::Attack()
{
	int roll1 = rand() % 6 + 1;
	int roll2 = rand() % 6 + 1;
	attack = roll1 + roll2;
	cout << "Barbarian will use " << attack << " power!!!" << endl;
	return attack;
}

int Barbarian::Defense()
{
	int roll1 = rand() % 6 + 1;
	int roll2 = rand() % 6 + 1;
	defense = roll1 + roll2;
	cout << "Barbarian defense " << defense << " ." << endl;
	return  defense;	
}

int Barbarian::Armor()
{
	armor = 0;
	return armor;
}

void Barbarian::gotInflicted(int valueInflicted)
{
	//for no hurt
	if (valueInflicted < 0)
	{
		valueInflicted = 0;
	}
	strength -= valueInflicted;
}

int Barbarian::getStrength()
{
	return strength;
}

Barbarian::~Barbarian()
{

}


/*******
int Barbarian::Attack()
{
	int roll1 = rand() % 6 + 1;
	int roll2 = rand() % 6 + 1;
	int attack = roll1 + roll2;
	return attack;
}

bool Barbarian::ifAlive()
{
	if (strength < 0)
	{
		alive = false;
	}
	return alive;
}


void Barbarian::displayInfo()
{
	cout << "Barbarian" << endl;
	cout << "Armor: " << Armor() << endl;
	cout << "Strength: " << getStrength() << endl;
} 
*******/
