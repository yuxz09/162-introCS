/******************************************************
	Oct 13, 2018

	Lab3 Main
	Yuxi Zhang

Description: Main function determine 

******************************************************/
#include "Die.hpp"
#include "LoadedDie.hpp"
#include "Game.hpp"
#include <iostream>

int main()
{
	Game game;
	//let user input start choice
	int start = game.getstartChoice();
	//srand seed changes with time
	srand(time(0));
	//play
	if (start == 1)
	{
		//get user choices 
		game.getUserInfo();
		//instance die object and start choice
		game.playGame();
	}
	//quit
	else if (start == 2)
	{
		exit(0);
	}

	return 0;

}



/*************************************
	//get user choice for die type of each player
	//for player1 die type
	int type1 = game.getdieType1();
	//for player2 die type
	int type2 = game.getdieType2();

	//get user choice for number of sides of each player
	//for player1 number of die sides
	int sides1 = game.getSides1();
	//for player2 number of die sides
	int sides2 = game.getSides2();

	//get user choice for game rounds 
	int gameRound = game.getRounds();


	//define temp variable for rolling number
	int temp1 = 0;
	int temp2 = 0;
	while(gameRound--)
	{
		temp1 = die1 -> rolling(sides1);
		temp2 = die2 -> rolling(sides2);
		game.printRound(temp1, temp2);

	}
	game.finalPrint();
*************************************/

