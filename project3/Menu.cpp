/******************************************************
	Oct 26, 2018

	Lab4 
	Yuxi Zhang

******************************************************/
#include "Menu.hpp"
#include "Character.hpp"
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

void Menu::displayOption()
{
	cout << "======Characters List======" << endl;
	cout << "1. Vampire" << endl;
	cout << "2. Barbarian" << endl;
	cout << "3. Blue men" << endl;
	cout << "4. Medusa" << endl;
	cout << "5. Harry Potter" << endl;
}

int Menu::playGame()
{
	string user_input;
	int choice;
	cout << "Would you like to play game?" << endl;
	cout << "1. Play." << endl;
	cout << "2. Quit." << endl;
	cin >> user_input;
	while (user_input != "1" && user_input != "2")
	{
		cout << "re-enter your choice: " << endl;
		cin >> user_input;
	}
	choice = stoi(user_input);
	return choice;
}

int Menu::getPlayer1()
{
	cout << "Select character you wanna play: " << endl;
	string user_input;
	int option1;
	displayOption();
	cin >> user_input;
	while (user_input != "1" && user_input != "2" && user_input != "3" && user_input != "4" && user_input != "5")
	{
		cout << "Please re-enter your choice: " << endl;
		cin >> user_input;
	}
	option1 = stoi(user_input);
	return option1;
}

int Menu::getPlayer2()
{
	cout << "Select character you wanna play: " << endl;
	string user_input;
	int option2;
	displayOption();
	cin >> user_input;
	while (user_input != "1" && user_input != "2" && user_input != "3" && user_input != "4" && user_input != "5")
	{
		cout << "Please re-enter your choice: " << endl;
		cin >> user_input;
	}
	option2 = stoi(user_input);
	return option2;
}


int Menu::replayGame()
{
	string user_input;
	int endOption;
	cout << "1. Play again" << endl;
	cout << "2. Exit the game" << endl;
	cin >> user_input;
	while (user_input != "1" && user_input != "2")
	{
		cout << "Please re-enter your choice: " << endl;
		cin >> user_input;
	}
	endOption = stoi(user_input);
	return endOption;	
}



