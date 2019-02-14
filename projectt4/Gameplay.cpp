#include <iostream>
#include <string>
#include "Gameplay.hpp"
#include "Container.hpp"
#include "Character.hpp"
#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "Bluemen.hpp"
#include "Medusa.hpp"
#include "Harrypotter.hpp"
#include "Menu.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stoi;

Gameplay::Gameplay()
{
	valueAttack = 0;
	valueDefense = 0;
	valueInflicted = 0;
	character_1_Alive = true;
	character_2_Alive = true;

	lineup1_score = 0;
	lineup2_score = 0;
}

//each turn see if any player die 
bool Gameplay::checkAlive(Character *player)
{
	bool alive = true;
	if (player -> getStrength() <= 0)
	{
		alive = false;
	}
	return alive;
}

//type: choose character 
//input number user choose in Menu and return which type in words
Character* Gameplay::checkCharacter(int type)
{
	if (type == 1)
	{
		Vampire *temp = new Vampire();
		return temp;
	}
	else if (type == 2)
	{
		Barbarian *temp = new Barbarian();
		return temp;
	}
	else if (type == 3)
	{
		Bluemen *temp = new Bluemen();
		return temp;
	}
	else if (type == 4)
	{
		Medusa *temp = new Medusa();
		return temp;
	}
	else 
	{
		Harrypotter *temp = new Harrypotter();
		return temp;
	}
}

void Gameplay::setLineup1(vector<int> v, vector<string> name_v)
{
	Character *temp_character;
	string temp_name;
	for (int i = 0; i < v.size(); i++)
	{
		temp_character = checkCharacter(v[i]);
		temp_name = name_v[i];
		temp_character->setName(temp_name);
		lineup1.addBack(temp_character);
	}
}

void Gameplay::setLineup2(vector<int> v, vector<string> name_v)
{
	Character *temp_character;
	string temp_name;
	for (int i = 0; i < v.size(); i++)
	{
		temp_character = checkCharacter(v[i]);
		temp_name = name_v[i];
		temp_character->setName(temp_name);
		lineup2.addBack(temp_character);
	}
}


void Gameplay::setPlayer1()
{
	player1 = lineup1.getcurCharacter();
}

void Gameplay::setPlayer2()
{
	player2 = lineup2.getcurCharacter();
}

void Gameplay::displayLoser()
{
	cout << "--------------display loser--------------" << endl;
	while (!loser_line.isFull())
	{
		cout << loser_line.getcurCharacter() -> getType() << " " << loser_line.getcurCharacter() -> getName() << endl;
		loser_line.front_Move();
	}
	cout << loser_line.getcurCharacter() -> getType() << " " << loser_line.getcurCharacter() -> getName() << endl;
}

void Gameplay::displayLineup1()
{
	cout << "--------------display Lineup2--------------" << endl;
	while(!lineup1.isFull())
	{
		cout << lineup1.getcurCharacter() -> getType() << " " << lineup1.getcurCharacter() -> getName() << endl;
		lineup1.front_Move();
	}
	cout << lineup1.getcurCharacter() -> getType() << " " << lineup1.getcurCharacter() -> getName() << endl;
}

void Gameplay::displayLineup2()
{
	cout << "--------------display Lineup2--------------" << endl;
    while(!lineup2.isFull())
	{
		cout << lineup2.getcurCharacter() -> getType() << " " << lineup2.getcurCharacter() -> getName() << endl;
		lineup2.front_Move();
	}
	cout << lineup2.getcurCharacter() -> getType() << " " << lineup2.getcurCharacter() -> getName() << endl;
}

void Gameplay::displayLineup1Score()
{
	cout << "Lineup1 Score: " << lineup1.getScore() << endl;
}

void Gameplay::displayLineup2Score()
{
	cout << "Lineup2 Score: " << lineup2.getScore() << endl;
}

int Gameplay::askPrintLoser()
{
	string user_input;
	int choice;
	cout << "Would you like to print loser container?" << endl;
	cout << "1. print" << endl;
	cout << "2. no" << endl;
	cin >> user_input;
	while (user_input != "1" && user_input != "2")
	{
		cout << "re-enter choice" << endl;
		cin >> user_input;
	}
	choice = stoi(user_input);
	return choice;
}

void Gameplay::Run()
{
	cout << "========================TOURNAMENT========================" << endl;
	while (lineup1.isEmpty() == false && lineup2.isEmpty() == false)
	{
		//set players from two lineup for each lineup
		setPlayer1();
		setPlayer2();
		//combat until one player lose
		static int round_count = 0;
		round_count ++;
		cout << "----------Round" << round_count << "-------------" << endl;

		Round(player1, player2);
	}
	cout << "				TOURNAMENT  SCORE				" << endl;
	displayLineup1Score();
	displayLineup2Score();
	lineup1_score = lineup1.getScore();
	lineup2_score = lineup2.getScore();

	if (lineup1_score > lineup2_score)
	{
		cout << "                  Lineup1 WIN                 " << endl;
	}
	else if (lineup1_score < lineup2_score)
	{
		cout << "                  Lineup2 WIN                 " << endl;
	}
	else if (lineup1_score == lineup2_score)
	{
		cout << "                      TIE                     " << endl;		
	}


	if (askPrintLoser() == 1)
	{
		displayLoser();
	}
	cout << "==============================================" << endl;
}
//Each round means character1 and character2, one of them die
void Gameplay::Round(Character *character1, Character *character2)
{
//use to count attack round for each player in order to call combat function
	int character1_combat_count = 0;
	int character2_combat_count = 0;

	while (character_1_Alive == true && character_2_Alive == true)
	{
		if (character1_combat_count == character2_combat_count)
		{
			//each fight display the type of character and name of fighters
			cout << "Lineup1 ATTACK  " << character1 -> getType() << "  " << character1 -> getName() << endl;
			cout << "Lineup2 DEFENSE  " << character2 -> getType() << "  " << character2 -> getName() << endl;

			Combat(character1, character2);
			character1_combat_count++;
		}
		else if (character1_combat_count > character2_combat_count)
		{
			//each fight display the type of character and name of fighters
			cout  << "Lineup2 ATTACK  " << character2 -> getType() << "  " << character2 -> getName() << endl;
			cout << "Lineup1 DEFENSE  " << character1 -> getType() << "  " << character1 -> getName() << endl;

			Combat(character2, character1);
			character2_combat_count++;			
		}
		//each attack, check if any one die
		character_1_Alive = checkAlive(character1);
		character_2_Alive = checkAlive(character2);
	}
	if (character_1_Alive == true && character_2_Alive == false)
	{
		cout << "-------Round ends-------" << endl;
		cout << "Lineup1 "  << character1 -> getType() << " " << character1 -> getName() << " WIN!" << endl;
		cout << "Lineup2 "  << character2 -> getType() << " " << character2 -> getName() << " LOSER!" << endl;
		winner = character1;
		loser = character2;

		//change order in lineup

		//add character in loser_line
		loser_line.addBack(loser);
		//delete loser in lineup2
		lineup2.removeFront();
		//remove winner in lineup1 front
		lineup1.removeFront();
		//add winner in lineup1 back
		lineup1.addBack(winner);
		winner -> restore();

		cout << "Lineup1 add 2 points!" << endl;
		cout << "Lineup2 reduce 1 point!" << endl;
		lineup1.addScore();
		lineup2.reduceScore();
	}
	else if (character_2_Alive == true && character_1_Alive == false)
	{
		cout << "-------Round ends-------" << endl;
		cout << "Lineup2: " << character2 -> getType() << " " << character2 -> getName() << " WIN!" << endl;
		cout << "Lineup1: " << character1 -> getType() << " " << character1 -> getName() << " LOSER!" << endl;
		winner = character2;
		loser = character1;
		//add character in loser_line
		loser_line.addBack(loser);
		//delete loser in lineup1
		lineup1.removeFront();
        //remove winner in lineup2 front
        lineup2.removeFront();
		//add winnner in lineup2
		lineup2.addBack(winner);
		winner -> restore();

		cout << "Lineup2 add 2 points!" << endl;
		cout << "Lineup1 reduce 1 point!" << endl;
		lineup2.addScore();
		lineup1.reduceScore();	
	}
	character_1_Alive = true;
    character_2_Alive = true;
}

void Gameplay::Combat(Character *Attacker, Character *Defender)
{
	cout << "@------Combat------@" << endl;
	valueAttack = Attacker -> Attack();
	valueDefense = Defender -> Defense();
	valueArmor = Defender -> Armor();
	valueInflicted = valueAttack - valueDefense - valueArmor;//total inflicted damage

	Defender -> gotInflicted(valueInflicted);

	cout << "Attacking power: " << valueAttack << endl;
	cout <<  "Defender armor:  " << valueArmor <<  endl;
	cout <<  "Defender strength: " << Defender -> getStrength() <<  endl;

	if (valueDefense > 5000)
	{
		cout << "HUGE DEFENSE" << endl;
	}
	else
	{
		cout << "Defending power: " << valueDefense << endl;
	}

	if (valueInflicted <= 0)
	{
		cout << "NO ATTACK" << endl;
	}
	else
	{
		cout << "Total inflicted: " << valueInflicted << endl;
	}
	cout << "Defender LEFT strength" << Defender -> getStrength() << endl;
}


/***
Gameplay::~Gameplay()
{
	lineup1.clear();

	lineup2.clear();

	loser_line.clear();

}
***/



