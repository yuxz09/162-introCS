/******************************************************
	Oct 13, 2018

	Project 2 Menu
	Yuxi Zhang

******************************************************/
#include <iostream>
#include <string>
#include "Menu.hpp"
#include "Zoo.hpp"
using std::cout;
using std::cin;
using std::endl;
using std::string;

//let user choose whether start the game
void Menu::start()
{
    string user_input;
    cout << "Would you like to start the game?" << endl;
    cout << "1. start the game" << endl;
    cout << "2. quit the game" << endl;
    cin >> user_input;

    while (user_input != "1" && user_input != "2")
    {
        cout << "re-enter your choice" << endl;
        cin >> user_input;
    }
    start_choice = stoi(user_input);
}

int Menu::getChoice()
{
    return start_choice;
}