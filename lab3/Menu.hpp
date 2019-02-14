/******************************************************
	Oct 13, 2018

	Lab3 Menu
	Yuxi Zhang

******************************************************/

#ifndef MENU_HPP
#define MENU_HPP
#include <string>
using std::string;

class Menu
{
public:
	//let user choose if start the game
	void start();
	//judge input is digit
	bool valid_digit(string input);
	//let user re-enter until it is qualified
	string user_reenter();

};

#endif