#ifndef MEDUSA_HPP
#define MEDUSA_HPP
#include "Character.hpp"


class Medusa : public Character
{
private:
	string Name;


	
	
public:
	Medusa();
	~Medusa();
	virtual int Attack() override;
	virtual int Defense() override;
	virtual int Armor() override;
	virtual double getStrength() override;
	virtual string getType()override;
	virtual void setName(string str) override;
	virtual string getName()override;
	void glare();
	virtual void gotInflicted(int valueInflicted) override;

	
};
#endif