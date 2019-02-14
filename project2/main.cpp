/***********************************************
** Date: Oct 15th, 2018
*
*
*
* 

* Name: Yuxi Zhang
* VERSION 1.0
* Description:

getChoice: choice whether start the game	
************************************************/
#include "Menu.hpp"
#include "Zoo.hpp"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stoi;

int main()
{
	//define menu object and call start() function
	Menu menu;
	menu.start();
	string user_input;

	int choice = menu.getChoice();

	if (choice == 1)
	{
		//enter the game
		Zoo zoo;
		zoo.init();
		zoo.run();
	}
	else
	{
		cout <<  "Quit!" << endl;
	}

}