#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP
#include "Character.hpp"


class Vampire : public Character
{
private:
	bool Charm;
	string Name;
	
public:
	Vampire();
	~Vampire();
	virtual int Attack() override;
	virtual int Defense() override;
	virtual int Armor() override;
	virtual double getStrength() override;
	virtual string getType()override;
	virtual void setName(string str) override;
	virtual string getName()override;
	void charm();
	virtual void gotInflicted(int valueInflicted) override;

	
};
#endif