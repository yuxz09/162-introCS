#include "Medusa.hpp"
#include <iostream>
using std::cout;
using std::endl;

Medusa::Medusa()
{
//	alive = true;
	strength = 8;	

}
Medusa::~Medusa()
{


}

int Medusa::Attack()
{
	int roll1 = rand() % 6 + 1;
	int roll2 = rand() % 6 + 1;
	attack = roll1 + roll2;
	if (attack == 12)
	{
		//special
		glare();
		attack = 10000;//attack value becomes very large
	}
//	cout << "Medusa will use " << attack << " power!!!" << endl;
	return attack;
}

int Medusa::Defense()
{
	int roll = rand() % 6 + 1;
	defense = roll;
//	cout << "Medusa defense " << defense << " ." << endl;
	return defense;	
}

int Medusa::Armor()
{
	armor = 3;
	return armor;
}

double Medusa::getStrength()
{
	return strength;
}

void Medusa::glare()
{
	cout << "Medusa: turned to stone!!!" << endl;
}


void Medusa::gotInflicted(int valueInflicted)
{
	if (valueInflicted < 0)
	{
		valueInflicted = 0;
	}
	strength -= valueInflicted;
}


void Medusa::setName(string str)
{
	Name = str;
}

string Medusa::getType()
{
	return "Medusa";
}

string Medusa::getName()
{
	return Name;
}

/************
bool Medusa::useSpecial()
{
	if (attack == 12)
	{
		cout << "enemy turned into stone! Medusa win!" << endl;
	}
	Glare = true;
}
************/
