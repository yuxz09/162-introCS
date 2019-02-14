#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP
#include "Character.hpp"


class Vampire : public Character
{
private:
	bool Charm;
	
public:
	Vampire();
	~Vampire();
	virtual int Attack() override;
	virtual int Defense() override;
	virtual int Armor() override;
	virtual int getStrength() override;
	virtual string getName()override;
	void charm();
	virtual void gotInflicted(int valueInflicted) override;

	
};
#endif