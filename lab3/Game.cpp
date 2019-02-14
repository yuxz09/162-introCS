/******************************************************
	Oct 13, 2018

	Lab3 Game
	Yuxi Zhang

******************************************************/


#include "Game.hpp"
#include "Die.hpp"
#include "LoadedDie.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stoi;

//count score for each player, define as static variable so that it can be used 
//int Game::score1 = 0;
//int Game::score2 = 0;
//define static member so that it can be used by Menu class
int Game::start_choice = 0;

Game::Game()
{
	Menu menu;
	menu.start();
}

bool Game::valid_digit(string input)
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

string Game::user_reenter()
{
	string input;
	cout << "Please re-enter an option for the choice " << endl;
	cin >> input;
    while (!valid_digit(input))
    {
        cout << "Please re-enter an option for the choice " << endl;
        cin >> input;
    }
    return input;
}


int Game::getstartChoice()
{
	return start_choice;
}

void Game::getUserInfo()
{
	string user_input;
	cout << "How many rounds would you like to play? " << endl;
	cin >> user_input;
    if (!valid_digit(user_input))
    {
    	user_input = user_reenter();
    }
    rounds = stoi(user_input);


	cout << "Which type of die for player 1: " << endl;
	cout << "1. Normal Die" << endl;
	cout << "2. Loaded Die" << endl;
	cin >> user_input;
    while (!valid_digit(user_input) || ((user_input != "1") && (user_input != "2")))
    {
    	user_input = user_reenter();
    }
    dieType1 = stoi(user_input);


    if (dieType1 == 2)
    {
    	cout << "Please enter weight for loadeddie: (must be integer) " << endl;
    	cin >> user_input;
	    while (!valid_digit(user_input))
	    {
	    	user_input = user_reenter();
	    }
	    weight1 = stoi(user_input);
    }
    else
    {
    	weight1 = 1;
    }


	cout << "Which type of die for player 2: " << endl;
	cout << "1. Normal Die" << endl;
	cout << "2. Loaded Die" << endl;
	cin >> user_input;
    while (!valid_digit(user_input) || ((user_input != "1") && (user_input != "2")))
    {
    	user_input = user_reenter();
    }
    dieType2 = stoi(user_input);

    if (dieType2 == 2)
    {
    	cout << "Please enter weight for loadeddie: (must be integer) " << endl;
    	cin >> user_input;
	    while (!valid_digit(user_input))
	    {
	    	user_input = user_reenter();
	    }
	    weight2 = stoi(user_input);
    }
    else
    {
    	weight2 = 1;    	
    }


	cout << "How many number of sides for die 1, player1: " << endl;
	cin >> user_input;
    if (!valid_digit(user_input))
    {
    	user_input = user_reenter();
    }
    dieSides1 = stoi(user_input);

	cout << "How many number of sides for die 2, player2: " << endl;
	cin >> user_input;
    if (!valid_digit(user_input))
    {
    	user_input = user_reenter();
    }
    dieSides2 = stoi(user_input);

}

void Game::playGame()
{
	//instantiate Die/LoadedDie object for each player
	//for player1 die	
	//in case of going out of scope when if statement ends, 
	//use pointers to dynamically allocate class object
	Die *die1;
	Die *die2;

	if (dieType1 == 1)
	{
		die1 = new Die(dieSides1);			
	}
	else if(dieType1 == 2)
	{
		die1 = new LoadedDie(dieSides1, weight1);			
	} 

	if (dieType2 == 1)
	{
		die2 = new Die(dieSides2);			
	}
	else if(dieType2 == 2)
	{
		die2 = new LoadedDie(dieSides2, weight2);			
	} 

	//define temp variable for rolling number
	int temp1 = 0;
	int temp2 = 0;
	score1 = 0;
	score2 = 0;
	while (rounds--)
	{
		temp1 = die1->rolling(dieSides1);
		temp2 = die2->rolling(dieSides2);

		if (dieType1 == 1)
		{
			cout << "Player 1 rolled a " << dieSides1 << " sided die, and rolled a " << temp1 << endl;
		}
		else if (dieType1 == 2)
		{
			cout << "Player 1 rolled a " << dieSides1 << " sided loaded die, and rolled a " << temp1 << endl;
		}

		if (dieType2 == 1)
		{
			cout << "Player 2 rolled a " << dieSides2 << " sided die, and rolled a " << temp2 << endl;
		}
		else if (dieType2 == 2)
		{
			cout << "Player 2 rolled a " << dieSides2 << " sided loaded die, and rolled a " << temp2 << endl;
		}

		if (temp1 > temp2)
		{
			score1++;
		}
		else if (temp1 < temp2)
		{
			score2++;
		}

		cout << "Now, Player 1, score: " << score1 << endl;
		cout << "Now, Player 2, score: " << score2 << endl;
	}


	delete die1;
	delete die2;

	cout << "Player 1, final score: " << score1 << endl;
	cout << "Player 2, final score: " << score2 << endl;

	if (score1 > score2)
	{
		cout << "Winner: Player1" << endl;
	}

	else if (score1 < score2)
	{
		cout << "Winner: Player2" << endl;
	}
}


/*************************************
void Game::finalPrint()
{


}

void Game::exitGame()
{
	exit(0);
}
*************************************/

/*************************************
int Game::getdieType1()
{
	return dieType1;
}

int Game::getdieType2()
{
	return dieType2;
}

int Game::getSides1()
{
	return dieSides1;
}

int Game::getSides2()
{
	return dieSides2;
}
*************************************/







