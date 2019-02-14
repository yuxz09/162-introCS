/******************************************************
	Oct 13, 2018

	Lab3 Game
	Yuxi Zhang

******************************************************/


#ifndef GAME_HPP
#define GAME_HPP
#include "Menu.hpp"
#include <string>
using std::string;
//#include "Die.hpp"
//#include "LoadedDie.hpp"

class Game
{
private:

	//let user choose whether to start game or quit
	static int start_choice;
	int score1;
	int score2;
	//how many rounds will be played
	int rounds;
	//what type of die for twp players
	int dieType1;
	int dieType2;
	//number of sides for dice of both players
	int dieSides1;
	int dieSides2;
	int weight1;
	int weight2;


public:
	Game();
	bool valid_digit(string input);
	string user_reenter();
	int getstartChoice();

	//A friend function can access member variable
	friend void Menu::start();
	void getUserInfo();
	void playGame();
//	friend int Die::rolling(int sides);
//	friend int LoadedDie::rolling(int sides);	
/*************************************
	int getdieType1();
	int getdieType2();	

	int getSides1();
	int getSides2();

	int getRounds();

	//print detailed result of each round
	void printRound(int tempNum1, int tempNum2);
	//display final result
	void finalPrint();

	void exitGame();
*************************************/

};

#endif