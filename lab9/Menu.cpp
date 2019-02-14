/**************************************

CS162 Yuxi Zhang
Lab 9
**************************************/
#include "Menu.hpp"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stoi;

//check whether input is digit
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


int Menu::getChoice()
{
	string user_input;
	int choice;
	cout << "1. test buffer" << endl;
	cout << "2. create palindrome" << endl;
	cin >> user_input;	
	while (user_input != "1" && user_input != "2")
	{
		cout << "re-enter your choice?" << endl;
		cin >> user_input;		
	}
	choice = stoi(user_input);
	return choice;
}

//how many rounds will be simulated
int Menu::getRounds()
{
	string user_input;
	int rounds;
	cout << "How many rounds would you like to simulate?" << endl;
	cin >> user_input;
	while (!checkDigit(user_input))
	{
		cout << "re-enter: how many rounds would you like to simulate?" << endl;
		cin >> user_input;		
	}
	rounds = stoi(user_input);
	return rounds;
}

//percentage chance to put a randomly generated number at the end of buffer
int Menu::getPercent_push()
{
	string user_input;
	int percent_push;
	cout << "How much percent would you like to put number at end of buffer?" << endl;
	cin >> user_input;
	while (!checkDigit(user_input))
	{
		cout << "re-enter the percentage?" << endl;
		cin >> user_input;		
	}
	percent_push = stoi(user_input);
	return percent_push;
}

//percentage chance to take out a randomly generated number at the front of buffer
int Menu::getPercent_pop()
{
	string user_input;
	int percent_pop;
	cout << "How much percent would you like to take out number at front of buffer?" << endl;
	cin >> user_input;
	while (!checkDigit(user_input))
	{
		cout << "re-enter the percentage?" << endl;
		cin >> user_input;		
	}
	percent_pop = stoi(user_input);
	return percent_pop;	
}















