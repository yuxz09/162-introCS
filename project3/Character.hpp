#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
using std::string;

class Character
{
protected:
	int attack;
	int defense;
	int armor;
	int strength;
	
	
public:
	Character();
	virtual ~Character() = 0;
	virtual string getName() = 0;
	virtual int Attack() = 0;
	virtual int Defense() = 0;
	virtual int Armor() = 0;
	virtual int getStrength() = 0;
	virtual void gotInflicted(int valueInflicted) = 0;
};
#endif