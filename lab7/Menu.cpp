#include <iostream>
#include <string>
#include "Menu.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stoi;

Menu::Menu()
{

}

int Menu::start()
{
	string user_input;
	int choice;
	cout << "--------Menu-----------" << endl;
	cout << "1. Enter a value to be added to the back of queue: " << endl;
	cout << "2. Display first node (front) value: " << endl;
	cout << "3. Remove first node (front) value: " << endl;
	cout << "4. Display the queue contents: " << endl;
	cout << "5. Exit" << endl;
	cout << "-----------------------" << endl;

	cout << "input your choice: " << endl;
	cin >> user_input;
	while (user_input != "1" && user_input != "2" && user_input != "3" &&  user_input != "4" &&  user_input != "5")
	{
		cout << "re-enter your choice: " << endl;
		cin >> user_input;
	}

	choice = stoi(user_input);
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




