/******************************************************
	Oct 26, 2018

	Lab4 
	Yuxi Zhang

******************************************************/
#include "Menu.hpp"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stoi;

//get option 
Menu::Menu()
{

}

int Menu::getOption()
{
	string user_input;
	int option;
	cout << "#########################" << endl;
	cout << "##                     ##" << endl;
	cout << "##        Menu         ##" << endl;
	cout << "##                     ##" << endl;
	cout << "#########################" << endl;
	cout << "There are three options: " << endl;
	cout << "1. function #1 " << endl;
	cout << "2. function #2 " << endl;
	cout << "3. function #3 " << endl;
	cout << "4. quit " << endl;
	cin >> user_input;
	while (user_input != "1" && user_input != "2" && user_input != "3" && user_input != "4")
	{
		cout << "Please re-enter your choice: " << endl;
		cin >> user_input;
	}
	option = stoi(user_input);
	return option;
}

