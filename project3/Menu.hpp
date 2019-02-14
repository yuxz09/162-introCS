/******************************************************
	Oct 21, 2018

	Lab4 
	Yuxi Zhang

Description:

******************************************************/
#ifndef MENU_HPP
#define MENU_HPP
#include <string>
#include "Character.hpp"
using std::string;

class Menu
{
private:
	int option;

public:
	Menu();
	void displayOption();
	int playGame();
	int getPlayer1();
	int getPlayer2();
	int replayGame();
	
};

#endif