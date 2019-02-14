#ifndef GAMEPLAY_HPP
#define GAMEPLAY_HPP
#include <string>
#include <vector>
using std::vector;
using std::string;
#include "Container.hpp"
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
	Container lineup1;
	Container lineup2;
	Container loser_line;

	Character *player1;//now turn to current combat one
	Character *player2;
	Character *loser;
	Character *winner;

	int valueAttack;
	int valueDefense;
	int valueInflicted;
	int valueArmor;


	bool character_1_Alive;
	bool character_2_Alive;

	int lineup1_score;
	int lineup2_score;

public:
	//intialize player 1, player2
	Gameplay();
	Character* checkCharacter(int type);



	void setLineup1(vector<int> v, vector<string> name_v);
	void setLineup2(vector<int> v, vector<string> name_v);
	
	void setPlayer1();
	void setPlayer2();
	void displayLoser();
	void Run();
	void Round(Character *character1, Character *character2);
	void Combat(Character *Attacker, Character *Defender);

	bool checkAlive(Character *player);

	void displayLineup1();
	void displayLineup2();
	void displayLineup1Score();
	void displayLineup2Score();
	int askPrintLoser();
//	~Gameplay();

};

#endif
