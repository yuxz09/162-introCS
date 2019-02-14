/******************************************************
	Oct 13, 2018

	Lab3 LoadedDie
	Yuxi Zhang

******************************************************/
#include "LoadedDie.hpp"
#include <cstdlib>
#include <ctime>

//member initialization list
//s: sides of loadeddie, w: weight for loadeddie
LoadedDie::LoadedDie(int s, int w)
	:Die(s),
		weight(w)//	//set a number for weight to calculate
{

}

//override member function in Die but do not include "override" in cpp
int LoadedDie::rolling(int sides)
{
	//range from 0 to 4
	return rand() % sides * weight;

}

 LoadedDie::~LoadedDie()
{

}