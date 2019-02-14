#ifndef Double_Linkedlist_HPP
#define Double_Linkedlist_HPP
#include "Node.hpp"
#include <iostream>

using std::cout;
using std::endl;

class Node; //forward declaration
class Double_Linkedlist 
{

public:

	Node *head; //head pointer
	Node *tail; //tail pointer
	//default constructor
	Double_Linkedlist();

	//destructor
	~Double_Linkedlist();

	void addhead(int number)
	{
		tail = add_head(tail, number);
		//trace back to head of linkedlist	
		Node *nodePtr = tail;
		while(nodePtr-> prev != NULL)
		{
			nodePtr = nodePtr -> prev;
		}
		//now nodePtr points to head, first node of linkedlist
		head = nodePtr;   
	}
	void addtail(int number)
	{
		head = add_tail(head, number);
		Node *nodePtr = head;
		while (nodePtr -> next != NULL)
        {
		    nodePtr = nodePtr -> next;
        }
        tail = nodePtr;
	}

	void removehead()
	{
		head = remove_head(head);
	}

	void removetail()
	{
		tail = remove_tail(tail);
	}

	void traverseReverse()
	{
		traverse_reverse(tail);
	}

	void traverse()
	{
		traverse(head);
	}


    void printValhead()
    {
    	print_Valhead(head);


    }

   	void printValtail()
   	{
   		print_Valtail(tail);
   	}

   	void displayList()
	{
		displayNode(head);
	}

private:
	//function 1
	Node *add_head(Node *aList, int number);
	//function 2
	Node *add_tail(Node *aList, int number);
	
	void displayNode(Node *aList) const;


	//function 3
	Node* remove_head(Node *aList);

	//function 4
	Node* remove_tail(Node *aList);


	//function 5
	void traverse_reverse(Node *aList);


	//function 6
	void traverse(Node *aList);

	//function 7
    void print_Valhead(Node *aList);



	//function 8
    void print_Valtail(Node *aList);

    void delete_Node(Node *aList);

};
#endif


/********

******/
