#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP
#include "Character.hpp"


class Barbarian : public Character
{
private:
	string Name;
	
	
public:
	Barbarian();
	~Barbarian();
	virtual int Attack() override;
	virtual int Defense() override;
	virtual int Armor() override;
	virtual void gotInflicted(int valueInflicted) override;
	virtual double getStrength() override;
	virtual string getType()override;
	virtual void setName(string str) override;
	virtual string getName()override;
//	virtual bool ifAlive() override;


	
};
#endif