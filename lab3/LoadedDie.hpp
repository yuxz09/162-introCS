/******************************************************
	Oct 13, 2018

	Lab3 LoadedDie
	Yuxi Zhang

******************************************************/


#ifndef LOADEDDIE_HPP
#define LOADEDDIE_HPP
#include "Die.hpp"

class LoadedDie : public Die
{
private:
	int weight;
public:
	//inherit member variables N
	//s: sides
	//w: weight
	LoadedDie(int s, int w);
	//CPP tutorial 12.2a
	//we highly recommend using override for every virtual function override you write to ensure
	//you have actually overridden the function you think you have

	//use "virtual" and "override" 
	virtual int rolling(int sides) override;

	virtual ~LoadedDie();

};
#endif