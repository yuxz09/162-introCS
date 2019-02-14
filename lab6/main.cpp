#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string>
#include "Menu.hpp"
#include "Node.hpp"
#include "Double_Linkedlist.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::stoi;
using std::string;
using std::fstream;
bool checkDigit(string user_input);
string re_enter();

bool checkDigit(string user_input)
{
	for (int i = 0; i < user_input.length(); i++)
	{
		if (!isdigit(user_input[i]))
		{
			return false;
		}
	}
	return true;
}

string re_enter()
{
	string user_input;
	cout << "re-enter your choice: " << endl;
	cin >> user_input;
	return user_input;
}


int main()
{
	Menu menu;
	menu.start();
	int choice;
	string user_input;
	int input;
	bool flag = true;//it is first time run the program
	Double_Linkedlist list;
	choice = menu.getChoice();




	do{
		if (flag == false) //if it is not first time run the program
		{
			menu.start();
			choice = menu.getChoice();			
		}
		flag = false;
		if (choice == 1)
		{
			cout << "please input value you would like to add: " << endl;
			cin >> user_input;
			while (checkDigit(user_input) == false)
			{
				cin >> user_input;
				user_input = re_enter();
			}
			input = stoi(user_input);

			list.addhead(input);
			cout << "display the list: " << endl;
			list.displayList();

		}
		else if(choice == 2)
		{
			cout << "please input value you would like to add: " << endl;
			cin >> user_input;
			while (checkDigit(user_input) == false)
			{
				user_input = re_enter();
			}
			input = stoi(user_input);
			list.addtail(input);
			cout << "display the list: " << endl;
			list.displayList();
		}
		else if(choice == 3)
		{
			cout << "move head of list: " << endl;
			list.removehead();
			cout << "display the list: " << endl;
			list.displayList();
		}
		else if(choice == 4)
		{
			cout << "move tail of list: " << endl;
			list.removetail();
			cout << "display the list: " << endl;
			list.displayList();
		}
		else if(choice == 5)
		{
			cout << "print out list from tail to head " << endl;
			list.traverseReverse();

		}
		else if(choice == 6)
		{
			cout << "print out list from head to tail " << endl;
			list.traverse();

		}
		else if(choice == 7)
		{
			cout << "print out value of node head points to " << endl;
			list.printValhead();


		}
		else if(choice == 8)
		{
			cout << "print out value of node tail points to " << endl;
			list.printValtail();

		}
		else if(choice == 9)
		{
			fstream inputFile;
			string filename;
			int num;
			cout << "read linkedlist from text file " << endl;
			cout << "Enter the filename: ";
			cin >> filename;
			inputFile.open(filename.c_str());

			if (inputFile)
			{
				//read all numbers and add them use addtail(int) function to a list and do other operations
				while(inputFile >> num)
				{
					list.addtail(num);
				}
				inputFile.close();
				cout << "choose continue, make choice and do operations with list" << endl;
			}
			else
			{
				cout << "Error opening the file." << endl;
			}		
		}
		else if (choice == 10)
		{
			cout << "quit" << endl;
			exit(0);
		}
	}while(menu.userWantsContinue());
}
