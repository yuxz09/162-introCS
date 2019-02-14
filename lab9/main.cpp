/**************************************

CS162 Yuxi Zhang
Lab 9 Stack and Queue STL Containers
implement linear data structures using STL containers

**************************************/

#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "Menu.hpp"


using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::queue;
using std::stack;


//check whether input is digit
bool checkDigit(string str)
{
	bool flag = true;
	for (int i = 0; i < str.length() && flag == true; i++)
	{
		if (!isdigit(str[i]))
		{
			flag = false;
		}
	}
	return flag;
}

//generate a random number 
int get_randomN()
{
	return rand() % 1000 + 1;
}

//random percentage of appending and removing value
int get_another_num()
{
	return rand() % 100 + 1;
}

//display all elements in queue
void displayQueue(queue<int> queue)
{
	cout << "-----Buffer-----:" << endl;
    if (queue.empty())
    {
        cout << "no element in queue" << endl;
    }
	while (!queue.empty())
	{
		cout << queue.front() << " ";
		queue.pop();
	}
	cout << endl;
}

//all size of queue
int displayLength(queue<int> queue)
{
	int size = 0;
	while (!queue.empty())
	{
		queue.pop();
		size++;
	}
	return size;	
}

/******
//i: ith iteration
double aveLength(queue<int> queue, int i)
{
	if (i != 1)
	{
		i--;
		(aveLength(queue, i) * i + displayLength(queue)) * 1.0 / (i+1);
	}
	return displayLength(queue) / 1;

}
******/

//output palindrome
void createPalindrome(string user_input)
{
	stack<char> mystack;
	cout << user_input;
	for (int i = 0; i < user_input.length(); i++)
	{
		mystack.push(user_input[i]);
	}
	while(!mystack.empty())
	{
		cout << mystack.top();
		mystack.pop();
	}
}



int main()
{
	srand(time(0));
	Menu menu;
	queue<int> myqueue;
	int choice;
	int rounds;
	int round = 1;
	int rand_push;
	int rand_pop;
	string user_input;
	double ave_length = 0;

	int percent_push;
	int percent_pop;
	int N;

	//let user choose buffer or palindrome
	choice = menu.getChoice();
	if (choice == 1)
	{
		rounds = menu.getRounds();
		percent_push = menu.getPercent_push();
		percent_pop = menu.getPercent_pop();

		while (rounds--)
		{
			N = get_randomN();
			rand_push = get_another_num();
			rand_pop = get_another_num();
			cout << "-------------------------------------" << endl;
			cout << "random Number N: " << N << endl;
			cout << "random percentage for adding value: " << rand_push << endl;
			cout << "random percentage for removing value: " << rand_pop << endl;

			if (rand_push <= percent_push)
			{
				cout << "add N at back of queue" << endl;
				myqueue.push(N);
			}
			if (rand_pop <= percent_pop)
			{
				cout << "remove front of queue" << endl;
				if (myqueue.empty())
				{
					cout << "no element in queue" << endl;
				}
				else
				{
					myqueue.pop();
				}
			}
			cout << "output all values in buffer:" << endl;
			displayQueue(myqueue);

			cout << "output length of buffer:" << endl;
			cout << displayLength(myqueue) << endl;

			cout << "output average length of buffer:" << endl;	
			ave_length = (ave_length * (round - 1) + displayLength(myqueue)) * 1.0 / round;
			cout << ave_length << endl;
			round++;
		}
	}
	else
	{
		cout << "input your string: " << endl;
		cin.ignore();
		getline(cin, user_input);
		createPalindrome(user_input);
	}
}


