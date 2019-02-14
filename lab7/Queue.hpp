#ifndef QUEUE_HPP
#define QUEUE_HPP

class Queue
{
private:
	struct QueueNode
	{
		//value specific Node contains
		int val;
		//next node object pointer
		QueueNode *next;
		//previous node object pointer
		QueueNode *prev;

		QueueNode(int value)
		{
			val = value;
		}
	};
	//need head variable
	QueueNode *head = NULL;

	//do not need tail variable
	

public:
	Queue();
	~Queue();

	bool isEmpty();
	void addBack(int val);//#function1
	int getFront();//#function2
	void removeFront();//#function3
	void printQueue();//#function4
};
#endif
