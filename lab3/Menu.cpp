/******************************************************
	Oct 13, 2018

	Lab3 Menu
	Yuxi Zhang

******************************************************/
#include <iostream>
#include <string>
#include "Menu.hpp"
#include "Game.hpp"//for using Game::start_choice
using std::cout;
using std::cin;
using std::endl;
using std::string;

//judge input is digit
bool Menu::valid_digit(string input)
{

    bool flag = true;//input start choice is valid
    for (int i = 0; i < input.length() && flag == true; i++)
    {
        if (!isdigit(input[i]))
        {
            flag = false;//there is non-digit in input
        }
    }
    return flag;
}
//let user input again until it is valid
string Menu::user_reenter()
{
	string input;
	cout << "Please re-enter an option for the choice " << endl;
	cin >> input;
    while (!valid_digit(input) || ((input != "1") && (input != "2")))
    {
        cout << "Please re-enter an option for the choice " << endl;
        cin >> input;
    }
    return input;
}

//let user choose whether start the game
void Menu::start()
{
	string user_input;
	int init_choice;

	cout << "Enter choice for start game or quit game: " << endl;
	cout << "1. Play game " << endl;
	cout << "2. Quit game " << endl;
	cin >> user_input;
    //input must be 1 or 2, and it is digit, not word
	if (!valid_digit(user_input) || ((user_input != "1") && (user_input != "2")))
    {
    	user_input = user_reenter();
    }

    init_choice = stoi(user_input);

	Game::start_choice = init_choice;


}