#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctype.h>
#include "Menu.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stoi;

Menu::Menu()
{

}

void Menu::start()
{
	string user_input;
	cout << "--------Menu-----------" << endl;
	cout << "1. Add number to head" << endl;
	cout << "2. Add number to tail" << endl;
	cout << "3. delete first node" << endl;
	cout << "4. delete last node" << endl;
	cout << "5. traverse list reversely" << endl;
	cout << "6. traverse list" << endl;
	cout << "7. print value of node the head points to" << endl;
	cout << "8. print value of node the tail points to" << endl;
	cout << "9. read list from file and do operation" << endl;
	cout << "10. quit" << endl;
	cout << "-----------------------" << endl;

	cout << "input your choice: " << endl;
	cin >> user_input;
	while (user_input != "1" && user_input != "2" && user_input != "3" &&  user_input != "4" &&  user_input != "5" &&  user_input != "6" &&  user_input != "7" &&  user_input != "8" &&  user_input != "9"&&  user_input != "10")
	{
		cout << "re-enter your choice: " << endl;
		cin >> user_input;

	}

	choice = stoi(user_input);

}

int Menu::getChoice()
{
	return choice;
}

bool Menu::userWantsContinue()
{
	string user_input;
	cout << "1.continue the game?" << endl;
	cout << "2.quit?" << endl;
	cin >> user_input;
	while (user_input != "1" && user_input != "2")
	{
		cout << "re-enter your choice: " << endl;
		cin >> user_input;
	}
	if (user_input == "1")
	{
		return true;
	}
	else
	{
		return false;
	}
}




