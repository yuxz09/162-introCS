#include "Container.hpp"
#include <iostream>
using std::cout;
using std::endl;

//score for lineup1 lineup2 as 0

Container::Container()
{
	score = 0;
	front = NULL;
	rear = NULL;
}

//check there is no character in lineup
bool Container::isEmpty()
{
	//if front is NULL than it is empty
	if (front == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//add score for winner lineup
void Container::addScore()
{
	score += 2;
}

//reduce score for loser lineup
void Container::reduceScore()
{
	score -= 1;
}

//get score for gameplay.cpp and see which lineup win the tournament
int Container::getScore()
{
	return score;
}

//add winner to the back of container
void Container::addBack(Character *temp)
{
	//no node
	if (isEmpty())
	{
		//build a new QueueNode
		front = new characterNode(temp);
		rear = front;
	}
	//at least one node
	else
	{
		rear -> next = new characterNode(temp);
		rear = rear -> next;
	}
}

//get first character in each lineup and battle
Character *Container::getcurCharacter()
{
//    cout << "front character: " << front -> curCharacter -> getName() << endl;
	return front -> curCharacter;
}

//for display lineup1, lineup2 and loser lineup, without delete node
//move from front to rear
void Container::front_Move()
{
	front = front -> next;
}

//if not full, keep move
//else return full so that inside display function will not call front_Move()
bool Container::isFull()
{
	if (front == rear)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void Container::removeFront()
{
	characterNode *temp;
	if (isEmpty())
	{
		cout << "lineup is empty now." << endl;
	}
	else
	{
		//temp points to same address front points to
		temp = front;
		//delete front one
		front = front -> next;
		delete temp;
	}
}
/***
void Container::clear()
{
	~Container();
}
***/


 
//destrutor
Container::~Container()
{
	characterNode *temp = front;
	while (temp != NULL)
	{
		characterNode *garbage = temp;
		temp = temp -> next;
		delete garbage -> curCharacter;
		delete garbage;
	}
}




