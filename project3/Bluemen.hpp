#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP
#include "Character.hpp"


class Bluemen : public Character
{
private:
	int Mob;
	
public:
	Bluemen();
	~Bluemen();
	virtual int Attack() override;
	virtual int Defense() override;
	virtual int Armor() override;
	virtual int getStrength() override;
	virtual string getName()override;
	void mob();
	virtual void gotInflicted(int valueInflicted) override;

	
};
#endif