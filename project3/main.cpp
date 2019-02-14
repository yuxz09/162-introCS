/***********************************************
** Date: Oct 26th, 2018

Yuxi Zhang
Project 3
Fantasy Combat Game

************************************************/
#include "Menu.hpp"
#include "Gameplay.hpp"
#include "Character.hpp"
#include <iostream>
#include <stdlib.h>    
#include <time.h>
using std::cout;
using std::endl;

int main()
{
	Menu menu;
	srand(time(0));
	int start_choice;
	int type1;
	int type2;
	start_choice = menu.playGame();

	while (start_choice == 1)
	{
		cout << "Let's choose characters!" << endl;

		type1 = menu.getPlayer1();
		type2 = menu.getPlayer2(); 

		Gameplay game;
		game.Run(type1, type2);
		start_choice = menu.replayGame();
	}
	if (start_choice == 2)
	{
		cout << "quit." << endl;
	}
}



