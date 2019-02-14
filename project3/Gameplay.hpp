#ifndef GAMEPLAY_HPP
#define GAMEPLAY_HPP
#include <string>
using std::string;
#include "Menu.hpp"
#include "Character.hpp"
#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "Bluemen.hpp"
#include "Medusa.hpp"
#include "Harrypotter.hpp"

class Gameplay
{
private:
	Character *player1;
	Character *player2;
	int valueAttack;
	int valueDefense;
	int valueInflicted;
	int valueArmor;
	int valueStrength;
	bool player_1_Alive;
	bool player_2_Alive;
	bool specialAttacker;


public:
	//intialize player 1, player2
	Gameplay();
	Character* checkCharacter(int type);
	void Run(int type1, int type2);
	void Combat(Character *Attacker, Character *Defender);
	void display_beforeAttack(Character *Attacker, Character *Defender);
	void display_afterAttack(int value_Attack, int value_Defender, int value_Damage);
	void display_strength(Character *Defender);
	bool checkAlive(Character *player);
	~Gameplay();

};

#endif

//	void setPlayer(int type1, int type2);