#include "Bluemen.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

Bluemen::Bluemen()
{
	strength = 12;
	Mob = 3;
}

Bluemen::~Bluemen()
{

}

int Bluemen::Attack()
{
	int roll1 = rand() % 10 + 1;
	int roll2 = rand() % 10 + 1;
	attack = roll1 + roll2;
	cout << "Bluemen will use " << attack << " power!!!" << endl;
	return attack;
}

int Bluemen::Defense()
{
	//special
	mob();
	int roll1 = rand() % 6 + 1;
	int roll2 = rand() % 6 + 1;
	int roll3 = rand() % 6 + 1;
	if (Mob == 1)
	{
		defense = roll1;
	}
	else if (Mob == 2)
	{
		defense = roll1 + roll2;
	}
	else if (Mob == 3)
	{
		defense = roll1 + roll2 + roll3;
	}
	cout << "Bluemen defense " << defense << " ." << endl;
	return defense;	
}

int Bluemen::Armor()
{
	armor = 3;
	return armor;
}

int Bluemen::getStrength()
{
	return strength;
}

void Bluemen::mob()
{
	//according to strength attribute and decide how much defense power
	if (strength >= 8 && strength <= 12)
	{
		cout << "Bluemen!!! All Defense!!!" << endl;
		Mob = 3;
	}
	else if (strength >= 4 && strength <= 8)
	{
		cout << "Bluemen!!! Two defense use" << endl;
		Mob = 2;
	}
	else if (strength >= 0 && strength <= 4)
	{
		cout << "Bluemen!!! One defense use" << endl;
		Mob = 1;
	}
}

string Bluemen::getName()
{
	return "Bluemen";
}


void Bluemen::gotInflicted(int valueInflicted)
{
	if (valueInflicted < 0)
	{
		valueInflicted = 0;
	}
	strength -= valueInflicted;
}

