/******************************************************
	Oct 21, 2018

	Lab4 
	Yuxi Zhang

******************************************************/
#ifndef MENU_HPP
#define MENU_HPP

class Menu
{
private:
	int option;
	int person_choice;
public:
	Menu();
	void person_Menu();
	int getOption();
	int getPerson_choice();
	
};

#endif