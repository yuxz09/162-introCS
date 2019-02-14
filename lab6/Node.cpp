#include <iostream>
#include "Node.hpp"
using std::cout;
using std::endl;


Node::Node()
{


}


Node::Node(int value1, Node *prev1, Node *next1)
{
	val = value1;
	prev = prev1;
	next = next1;
}


Node::~Node()
{
	prev = NULL;
	next = NULL;
}

