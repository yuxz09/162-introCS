/******************************************************
	Oct 21, 2018

	Lab4 
	Yuxi Zhang

******************************************************/
#include "Menu.hpp"
#include "University.hpp"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <ctype.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stoi;
using std::vector;
using std::stoi;

//get option 
Menu::Menu()
{
	cout << "================================== " << endl;
	cout << "Plese choose what you want to do: " << endl;
	cout << "1. Prints information about all the buildings" << endl;
	cout << "2. Prints information of everybody at the university" << endl;
	cout << "3. Choose a person to do work" << endl;
	cout << "4. Exit the program" << endl;
	cout << "================================== " << endl;
	string user_input;
	cin >> user_input;
	while (user_input != "1" && user_input != "2" && user_input != "3" && user_input != "4")
	{
		cin >> user_input;
	}
	option = stoi(user_input);
}

int Menu::getOption()
{
	return option;
}

	
//choose person's number, return to main for let them do_work()
int Menu::getPerson_choice()
{
	string user_input;
	cin >> user_input;
	int choice;
	bool flag = true;
	for (int i = 0; i < user_input.length() && flag == false; i++)
	{
		if (!isdigit(user_input[i]))
		{
			flag = false;		
		}
	}
	if (flag == true)
	{
		choice = stoi(user_input);
	}
	return choice;
}

