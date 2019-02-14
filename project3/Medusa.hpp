#ifndef MEDUSA_HPP
#define MEDUSA_HPP
#include "Character.hpp"


class Medusa : public Character
{


	
	
public:
	Medusa();
	~Medusa();
	virtual int Attack() override;
	virtual int Defense() override;
	virtual int Armor() override;
	virtual int getStrength() override;
	virtual string getName() override;
	void glare();
	virtual void gotInflicted(int valueInflicted) override;

	
};
#endif