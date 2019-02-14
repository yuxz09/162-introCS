#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP
#include "Character.hpp"


class Harrypotter : public Character
{
private:	
//	bool alive;
	bool Hogwarts;
	string Name;

	
public:
	Harrypotter();
	~Harrypotter();
	virtual int Attack() override;
	virtual int Defense() override;
	virtual int Armor() override;
	virtual double getStrength() override;
	virtual string getType()override;
	virtual void setName(string str) override;
	virtual string getName()override;
	void hogwarts();
	virtual void gotInflicted(int valueInflicted) override;

	
};
#endif