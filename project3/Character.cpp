#include "Character.hpp"
#include <iostream>
using std::string;

Character::Character()
{
	

	
}
Character::~Character()
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
	return "character";	
}

int Character::getStrength()
{
	strength = 0;
	return strength;
	
}

void Character::gotInflicted(int valueInflicted)
{

}
