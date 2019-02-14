#include <iostream>
#include <string>
#include "Queue.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stoi;



Queue::Queue()
{
	head = NULL;
}

//points to NULL,
bool Queue::isEmpty()
{
	if (head == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void Queue::addBack(int value)
{

	if (isEmpty())
	{
		//allocate new node and assign it to head
		head = new QueueNode(value);
		//head next points to itself
		head -> next = head;
		//head prev points to itself
		head -> prev = head;
	}
	else
	{
		//only one node now, add one more node
		if (head -> next == head || head -> prev == head)
		{
			//allocate new node and assign it to head next
			head -> next = new QueueNode(value);
			//head prev points to new node
			head -> prev = head -> next;
			//head next, the new node, its prev points to head
			head -> next -> prev = head;
			//head next, the new node, its next points to head
			head -> next -> next = head;
		}
		//at least two node
		else
		{
			//find tailnode in queue
			QueueNode *tailNode = head -> prev;
			//allocate new node and assign it to head next
			tailNode -> next =  new QueueNode(value);
			//head prev, original one points to tailnode, now points to tailnode next, new node
			head -> prev = tailNode -> next;
			//head prev prev, head prev now points to new node, its prev should points to tailnode
			head -> prev -> prev = tailNode;
			//tailnode next next, new node next points to head
			tailNode -> next -> next = head;
		}
	}
}


void Queue::printQueue()
{
	//store head address in temp 
	QueueNode *temp = head;
	if (isEmpty())
	{
		cout << "Queue is empty now." << endl;
	}
	else
	{
		do
		{
			cout  << head -> val << endl;
			head = head -> next;
		}while(head != temp);
		cout << endl;
	}		
}


int Queue::getFront()
{
	int tempValue;
	if (isEmpty())
	{
		cout << "Queue is empty now." << endl;
		exit(0);
	}
	else
	{
		//return head node value
		tempValue = head -> val;
	}
	return tempValue;		
}


void Queue::removeFront()
{
	QueueNode *temp;
	if (isEmpty())
	{
		cout << "Queue is empty now." << endl;
	}
	else
	{
	    //if only one head node now
	    if (head -> next == head)
        {
        	//store head address in temp
        	temp = head;
        	//release memory where original head
        	delete temp;
        	//only one node head, let head points to null, for isEmpty() function
        	head = NULL;
        }
        //at least two nodes
        else
        {
        	//store head address in temp
        	temp = head;
        	//find tail node in queue
        	QueueNode *tailNode = head -> prev;
        	//head next prev, second node prev points to tailnode
        	head -> next -> prev = tailNode;
        	//tailnode next points to second node
        	tailNode -> next = head -> next;
        	//other next and prev do not need to change
        	//head move one forward
        	head = head -> next;
        	//delete original head memory
        	delete temp;
        }
	}
}


Queue::~Queue()
{
	//keep moving head node until it is empty
	while(!isEmpty())
	{
		removeFront();
	}
}