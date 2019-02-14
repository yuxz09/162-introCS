/******************************************************
	Oct 26, 2018

	Lab4 
	Yuxi Zhang

******************************************************/
#include "Menu.hpp"
#include "Character.hpp"

#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stoi;

//get option 
Menu::Menu()
{

}

bool Menu::checkDigit(string str)
{
	bool flag = true;//is digit
	for (int i = 0; i < str.length() && flag == true; i++)
	{
		if (!isdigit(str[i]))
		{
			flag = false;
		}
	}
	return flag;
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

string Menu::askName()
{
	string user_input;
	cout << "Enter name for the character: " << endl;
	cin.get();
	getline(cin, user_input);
	return user_input;
}

int Menu::numLineup()
{
	int num;
	string user_input;
	cout << "How many characters you would like to choose: " << endl;
	cin >> user_input;
	while (!checkDigit(user_input))
	{
		cout << "re-enter the number: " << endl;
		cin >> user_input;
	}
	num = stoi(user_input);
	return num;
}

int Menu::getOption()
{
	string user_input;
	int option;
	displayOption();
	cin >> user_input;
	while (user_input != "1" && user_input != "2" && user_input != "3" && user_input != "4" && user_input != "5")
	{
		cout << "re-enter your choice: " << endl;
		cin >> user_input;
	}
	option = stoi(user_input);
	return option;
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



