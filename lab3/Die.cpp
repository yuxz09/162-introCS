/******************************************************
	Oct 13, 2018

	Lab3 Die
	Yuxi Zhang

******************************************************/


#include "Die.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;

/******************************************************
//define constructor to initialize die object
Die::Die(int sides)
{
	N = sides;
}
use member initialization list so if not comment out, redefinition occurs
******************************************************/
//roll die and return a number
int Die::rolling(int sides)
{
	//value of seed change with time
	//range from 0 to 4
	return rand() % sides;
}

Die::~Die()
{

}