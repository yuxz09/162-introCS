#ifndef CONTAINERS_HPP
#define CONTAINERS_HPP
#include "Character.hpp"

class Container
{
private:
	int score;
	struct characterNode
	{
		Character *curCharacter;
		characterNode *next;

		characterNode(Character *character, characterNode *next_value = NULL)
		{
			curCharacter = character;
			next = next_value;
		}
	};
	characterNode *front = NULL;
	characterNode *rear = NULL;

public:
	Container();
	bool isEmpty();

	void addBack(Character *temp);
	void front_Move();
	bool isFull();
	void addScore();
	void reduceScore();
	int getScore();

	Character *getcurCharacter();
	void removeFront();
//	void clear();
	~Container();


	
};
#endif