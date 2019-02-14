#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP
#include "Character.hpp"


class Barbarian : public Character
{
private:
//	bool alive;
	
	
public:
	Barbarian();
	~Barbarian();
	virtual int Attack() override;
	virtual int Defense() override;
	virtual int Armor() override;
	virtual void gotInflicted(int valueInflicted) override;
	virtual int getStrength() override;
	virtual string getName()override;
//	virtual bool ifAlive() override;


	
};
#endif