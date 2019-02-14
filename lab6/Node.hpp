#ifndef NODE_HPP
#define NODE_HPP
#include <iostream>

class Node
{
public:
	//specific Node contains
	int val; 
	//pointer to previous node
	Node *prev;
	//pointer to next node
	Node *next;


	//default constructor
	Node();
	

	//defined constructor
	Node(int value1, Node *prev1 = NULL, Node *next1 = NULL);

	//destructor constructor
	~Node();

};
#endif
