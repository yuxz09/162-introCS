#include "Vampire.hpp"
#include <iostream>
using std::cout;
using std::endl;

Vampire::Vampire()
{
	strength = 18;
}

Vampire::~Vampire()
{

}

int Vampire::Attack()
{
	int roll = rand() % 12 + 1;
	attack = roll;
	cout << "Vampire will use " << attack << " power!!!" << endl;
	return attack;
}

int Vampire::Defense()
{
	charm();	
	//half chance vampire can not use charm
	if (Charm == false)
	{
		int roll = rand() % 6 + 1;
		defense = roll;
		cout << "Vampire defense " << defense << " ." << endl;
	}
	else
	{
		cout << "Vampire can not be attacked." << endl;
		defense = 100000;//let it higher than medusa glare attack value, so that it can trumps glare
	}
	return defense;	
}

int Vampire::Armor()
{
	armor = 1;
	return armor;
}

double Vampire::getStrength()
{
	return strength;
}

void Vampire::charm()
{
	//chance == 1: they have chance that opponent not attack
	//chance == 0: they have chance that opponent attack
	int chance = rand() % 2;
	if (chance == 1)
	{
		cout << "Vampire Charm!" << endl;
		Charm = true;
	}
	else
	{
		Charm = false;
	}
}

void Vampire::setName(string str)
{
	Name = str;
}

string Vampire::getType()
{
	return "Vampire";
}

string Vampire::getName()
{
	return Name;
}


void Vampire::gotInflicted(int valueInflicted)
{
	if (valueInflicted < 0)
	{
		valueInflicted = 0;
	}
	strength -= valueInflicted;
}
