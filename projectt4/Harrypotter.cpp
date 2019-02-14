#include "Harrypotter.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

Harrypotter::Harrypotter()
{
//	alive = true;
	strength = 10;
	Hogwarts = false;//the special skill do not use
}

Harrypotter::~Harrypotter()
{


}


void Harrypotter::setName(string str)
{
	Name = str;
}

string Harrypotter::getType()
{
	return "Harrypotter";
}

string Harrypotter::getName()
{
	return Name;
}

int Harrypotter::Attack()
{
	int roll1 = rand() % 6 + 1;
	int roll2 = rand() % 6 + 1;
	attack = roll1 + roll2;
//	cout << "Harrypotter will use " << attack << " power!!!" << endl;
	return attack;
}

int Harrypotter::Defense()
{
	int roll1 = rand() % 6 + 1;
	int roll2 = rand() % 6 + 1;
	defense = roll1 + roll2;
//	cout << "Harrypotter defense " << defense << " ." << endl;
	return  defense;	
}

int Harrypotter::Armor()
{
	armor = 0;
	return armor;
}

double Harrypotter::getStrength()
{
	hogwarts();
	return strength;
}


void Harrypotter::hogwarts()
{
	if (strength <= 0 && Hogwarts == false)
	{
		cout << "hogwarts!! Harry potter re-born at King Cross train station." << endl;
		cout << "Harry potter: lets Fight again!" << endl;
		strength = 20;
		Hogwarts = true;//use special skill
	}
}


void Harrypotter::gotInflicted(int valueInflicted)
{
	if (valueInflicted < 0)
	{
		valueInflicted = 0;
	}
	strength -= valueInflicted;
}
