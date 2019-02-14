#include "Double_Linkedlist.hpp"
#include <iostream>
#include <stdlib.h>
using std::cout;
using std::endl;


Double_Linkedlist::Double_Linkedlist()
{
	head = NULL;
	tail = NULL;
}


void Double_Linkedlist::displayNode(Node *aList) const
{
	if (aList == NULL)
	{
		cout << aList -> val << " " << endl;
		displayNode(aList->next);
	}
}


//always pass tail as aList parameter, return pointer to tail of bigger Double_Linkedlist
Node *Double_Linkedlist::add_head(Node *aList, int number)
{
	if (aList == NULL)
	{

		//call node defined constructor
		return new Node(number);
	}
	else
	{
		//split into constituent head and tail
		//temp node points to the former one
		//use this to see whether previous one is null or not
		Node *temp = aList -> prev;

		//detached tail
		aList -> prev = NULL;
		//recursively add number to head
		Node *biggerList = add_head(temp, number);

		//reattach the tail
		aList -> prev = biggerList;
		biggerList -> next = aList;


		//return bigger list
		return aList;	
	}
}

//always pass head as aList parameter, return pointer to head of bigger Double_Linkedlist
Node *Double_Linkedlist::add_tail(Node *aList, int number)
{
	//if head == NULL, means the linkedlist it represents is empty
	if (aList == NULL)
	{
		//call node defined constructor
		return new Node(number);
	}
	else
	{
		//split into constituent head and tail
		//create a new node points to next node of list, head->next
		Node *temp = aList -> next; 

		//detached the last node
		aList -> next = NULL;

		//recursively add number to temp node, end of list
		//which the new node(biggerList) prev and next points to null
		Node *biggerList = add_tail(temp, number);

		//recursively reattach new node(biggerList) to the former node
		//the first time, aList will be new node former one
		//add aList-> prev to new node
		aList -> next = biggerList;
		//add new node biggerList -> prev to the new node former one
		biggerList -> prev = aList;
	
		//return pointer to head of bigger list
		//now it returns new node former one and new node together, they are called biggerList
		return aList;

		//then back to add(temp, number) function
		//aList is the node former than the former node, the last 3rd one
		//execute  "aList -> next = biggerList;" so that the last two nodes will reattached the last 3rd node
		//return....		
	}

}

Node* Double_Linkedlist::remove_head(Node *aList)
{
	if (aList == NULL)
	{
		return 0;
	}
	else
	{
		Node *temp =  aList;
		aList = aList -> next;
		aList -> prev = NULL;
		temp -> next = NULL;
		return aList;
	}

}

Node* Double_Linkedlist::remove_tail(Node *aList)
{
	if (aList == NULL)
	{
		return 0;
	}
	else
	{
		Node *temp = aList;
		aList = aList -> prev;
		aList -> next = NULL;
		temp -> prev = NULL;
		return aList;
	}
}


void Double_Linkedlist::traverse_reverse(Node *aList)
{
	if (aList != NULL)
	{
		Node *nodePtr = aList;
		if (nodePtr != NULL)
		{
			cout << aList -> val << " " << endl;
			traverse_reverse(aList->prev);
		}
	}
}

void Double_Linkedlist::traverse(Node *aList)
{
	if (aList != NULL)
	{
		Node *nodePtr = aList;
		if (nodePtr != NULL)
		{
			cout << aList -> val << " " << endl;
			traverse(aList->next);
		}
	}
}

void Double_Linkedlist::print_Valhead(Node *aList)
{
	if (aList != NULL)
	{
		cout << "value head points to: " << aList -> val << endl;
	}

}

void Double_Linkedlist::print_Valtail(Node *aList)
{
	if (aList != NULL)
	{
		cout << "value tail points to: " << aList -> val << endl;
	}
}


Double_Linkedlist::~Double_Linkedlist()
{
	Node *nodePtr = head;
	while (nodePtr != NULL)
	{
		Node *garbage = nodePtr;
		nodePtr = nodePtr -> next;
		delete_Node(garbage);
	}
	head = NULL;
}

void Double_Linkedlist::delete_Node(Node *aList)
{
	delete aList;
}



/******
error:
I want to delete node use two pointers both from head and tail, 
separate two conditions:
amount of list is odd number
amount of list is even number


Double_Linkedlist::~Double_Linkedlist()
{
	Node *nodePtr1 = head;
	Node *nodePtr2 = tail;

//nodePtr1 != nodePtr2: if amount of linkedlist is odd, terminates when points to the same node, the middle one

//nodePtr1 != nodePtr2 -> next ||  nodePtr2 != nodePtr1 -> next: if amount of linkedlist is even, 
//terminates when nodePtr1 points to garbage2, nodePtr points to garbage1
	while (nodePtr1 != nodePtr2 && (nodePtr1 != nodePtr2 -> next || nodePtr2 != nodePtr1 -> next))
	{
		//garbage1 keeps track of node to be deleted from head
		Node *garbage1 = nodePtr1;
		nodePtr1 = nodePtr1 -> next;
		
		//garbage2 keeps track of node to be deleted from tail
		Node *garbage2 = nodePtr2;
		nodePtr2 = nodePtr2 -> next;

		//delete garbage1 and 2 nodes
		delete garbage1;
		delete garbage2;

		garbage1 = NULL;
		garbage2 = NULL;
	}

	//delete like single_linkedlist no matter even number or odd number
	//if even number, the list now contains two nodes
	//if odd number, the list now contains one node
	while(nodePtr1 != NULL)
	{
		Node *garbage = nodePtr1;
		nodePtr1 = nodePtr1 -> next;
		delete garbage;
	}
}



void Double_Linkedlist::display() const
{
	cout << "head" << head << endl;
	cout << "headprev: " << head -> prev << endl;
	cout << "headnext: " << head -> next << endl;

	cout << "tail" << tail << endl;
	cout << "tailprev: " << tail -> prev << endl;
	cout << "tailnext: " << tail -> next << endl;
}



******/

