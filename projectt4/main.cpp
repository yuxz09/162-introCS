/***********************************************
** Date: Nov 13th, 2018

Yuxi Zhang
Project 4
Fantasy Combat Game

************************************************/
#include "Menu.hpp"
#include "Gameplay.hpp"
#include "Character.hpp"
#include "Container.hpp"
#include <iostream>
#include <vector>
#include <stdlib.h>    
#include <time.h>
using std::cout;
using std::endl;
using std::vector;

int main()
{
	Menu menu;
	srand(time(0));
	int start_choice;

	vector<int> v1;
	vector<int> v2;	
	int sizeLineup1;
	int sizeLineup2;
	int choice;
	string name;
	vector <string> name_container1;//at first, wanna use name_container for both line1 and line2
	vector <string> name_container2;

	start_choice = menu.playGame();
	Gameplay game;
	while (start_choice == 1)
	{
		cout << "			Lineup1 		" << endl;
		sizeLineup1 = menu.numLineup();
		for (int i = 0; i < sizeLineup1; i++)
		{
			choice = menu.getOption();
			v1.push_back(choice);
			name = menu.askName();
			name_container1.push_back(name);		
		}
		game.setLineup1(v1, name_container1);


		cout << "			Lineup2 		" << endl;
		sizeLineup2 = menu.numLineup();
		for (int i = 0; i < sizeLineup2; i++)
		{
			choice = menu.getOption();
			v2.push_back(choice);
			name = menu.askName();	
			name_container2.push_back(name);		
		}
		game.setLineup2(v2, name_container2);
		
//		game.displayLineup1();
//		game.displayLineup2();
		
		game.Run();
	
		start_choice = menu.replayGame();	
	}
	if (start_choice == 2)
	{
		cout << "quit." << endl;
	}
}



