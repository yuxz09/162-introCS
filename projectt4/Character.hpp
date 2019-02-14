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
	double strength;
	
	
public:
	Character();
	virtual ~Character() = 0;
	virtual string getName() = 0;
	virtual string getType() = 0;
	virtual void setName(string str) = 0;
	virtual int Attack() = 0;
	virtual int Defense() = 0;
	virtual int Armor() = 0;
	virtual double getStrength() = 0;
	void restore();
	virtual void gotInflicted(int valueInflicted) = 0;
};
#endif