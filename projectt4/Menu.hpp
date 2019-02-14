/******************************************************
	Oct 21, 2018

	Lab4 
	Yuxi Zhang

Description:

******************************************************/
#ifndef MENU_HPP
#define MENU_HPP
#include <string>
#include <vector>
using std::vector;
#include "Character.hpp"
using std::string;

class Menu
{
private:
	int option;

public:
	Menu();
	bool checkDigit(string str);
	void displayOption();
	int playGame();
	int getOption();
	int numLineup();
	int replayGame();
	string askName();
	
};

#endif