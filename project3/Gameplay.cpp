#include <iostream>
#include <string>
#include "Gameplay.hpp"
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
	valueStrength = 0;
	player_1_Alive = true;
	player_2_Alive = true;
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


void Gameplay::Run(int type1, int type2)
{
	//no character
	player1 =  checkCharacter(type1);
	player2 =  checkCharacter(type2);
//use to count attack round for each player in order to call combat function
	int player1_combat_count = 0;
	int player2_combat_count = 0;

	while (player_1_Alive == true && player_2_Alive == true)
	{
		if (player1_combat_count == player2_combat_count)
		{
			cout << "player 1 attack" << endl;
			display_beforeAttack(player1, player2);
			Combat(player1, player2);
			player1_combat_count++;
		}
		else if (player1_combat_count > player2_combat_count)
		{
			cout << "player 2 attack" << endl;
			display_beforeAttack(player2, player1);			
			Combat(player2, player1);
			player2_combat_count++;			
		}
		//each attack, check if any one die
		player_1_Alive = checkAlive(player1);
		player_2_Alive = checkAlive(player2);
	}
	if (player_1_Alive == true && player_2_Alive == false)
	{
		cout << "player1: " << player1 -> getName() << " WIN!!!" << endl;
	}
	else if (player_2_Alive == true && player_1_Alive == false)
	{
		cout << "player2: " << player2 -> getName() << " WIN!!!" << endl;
	}
}

 
void Gameplay::Combat(Character *Attacker, Character *Defender)
{
//p1 attack and p2 get hurt
//display before attack
//	Menu::display_beforeAttack(Attacker, Defender);
	cout << "=====================================" << endl;
	cout << "			 Combat 			      " << endl;
	cout << "=====================================" << endl;	
	valueAttack = Attacker -> Attack();
	valueDefense = Defender -> Defense();
	valueArmor = Defender -> Armor();
	valueInflicted = valueAttack - valueDefense - valueArmor;//total inflicted damage

	cout << "ATTACK" << endl;
	display_afterAttack(valueAttack, valueDefense, valueInflicted);
	Defender -> gotInflicted(valueInflicted);
	display_strength(Defender);
}

void Gameplay::display_beforeAttack(Character *Attacker, Character *Defender)
{
	cout << "---before---" << endl;
	cout << "Attacker: " << Attacker -> getName()  << endl;
	cout << "Defender: " << Defender -> getName()  << endl;
	cout <<  Defender -> getName() << "Armor:  " << Defender -> Armor() <<  endl;
	cout <<  Defender -> getName() << "Strength: " << Defender -> getStrength() <<  endl;
}

void Gameplay::display_afterAttack(int value_Attack, int value_Defense, int value_Damage)
{
	cout << "---after---" << endl;
	cout << "Attacking power: " << value_Attack << endl;
	if (value_Defense > 5000)
	{
		cout << "HUGE DEFENSE" << endl;
	}
	else
	{
		cout << "Defending power: " << value_Defense << endl;
	}
	if (value_Damage <= 0)
	{
		cout << "NO ATTACK" << endl;
	}
	else
	{
		cout << "Total inflicted: " << value_Damage << endl;
	}
}

void Gameplay::display_strength(Character *Defender)
{
	cout << "-------Defender LEFT strength-------" << endl;
	cout << Defender -> getStrength() << endl;
}

Gameplay::~Gameplay()
{
	delete player1;
	delete player2;
}


