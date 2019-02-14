#include "Character.hpp"
#include <iostream>
using std::string;
using std::cout;
using std::endl;

Character::Character()
{
	

	
}

void Character::setName(string str) 
{

}

int Character::Attack()
{
	attack = 0;
	return attack;
}

int Character::Defense()
{
	defense = 0;
	return defense;
}

int Character::Armor()
{
	armor = 0;
	return armor;
}

string Character::getName()
{

}

double Character::getStrength()
{
	strength = 0;
	return strength;
	
}

void Character::gotInflicted(int valueInflicted)
{

}

void Character::restore()
{
	cout << "winner will restore, +10 strengh......" << endl;
	strength = strength * 1.5;
}


Character::~Character()
{
	

	
}
