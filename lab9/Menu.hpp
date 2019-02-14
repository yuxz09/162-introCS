/**************************************

CS162 Yuxi Zhang
Lab 9

**************************************/
#ifndef MENU_HPP
#define MENU_HPP
#include <string>
using std::string;

class Menu
{
public:
	int getChoice();
	bool checkDigit(string str);
	int getRounds();
	int getPercent_push();
	int getPercent_pop();
};
#endif