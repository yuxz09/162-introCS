/******************************************************
	Oct 13, 2018

	Project 2 Menu
	Yuxi Zhang

******************************************************/

#ifndef MENU_HPP
#define MENU_HPP
#include <string>
using std::string;

class Menu
{
private:
	int start_choice;
public:
	//let user choose if start the game
	void start();
	//let outside Menu class(main) access
	int getChoice();
	//judge input is digit
	bool valid_digit(string input);
	//let user re-enter until it is qualified
	string user_reenter();

};

#endif