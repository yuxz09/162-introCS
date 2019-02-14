/***********************************************
** Date: Oct 26th, 2018

Yuxi Zhang
Lab5

First Recursive Function
************************************************/
#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
#include "Menu.hpp"
#include "Func.hpp"


bool checkDigit(string user_input)
{
	bool flag = true;
	for (int i = 0; i < user_input.length() && flag == true; i++)
	{
		if (!isdigit(user_input[i]))
		{
			flag = false;
		}
	}
	return flag;
}

int main()
{
	Menu menu;
	int option;//get option from first menu
	string user_input;//general variable for all user input
	int num;//number of integers in array
	int *myArray;//user input numbers fill the array
	int N;//integer N, uplimit for triangular number

	option = menu.getOption();

	while (option != 4)
	{
		if (option == 1)
		{
			cout << "Please enter string you would like to reverse: " << endl;
			cin >> user_input;
			first_reverse(user_input);
		}
		else if (option == 2)
		{
			cout << "Please input number of integers: " << endl;
			cin >> user_input;
			while (checkDigit(user_input) == false)
			{
				cout << "re-enter number of integers: " << endl;
				cin >> user_input;
			}	
			num = stoi(user_input);
			cout << "Please enter a series of integers to fill the array: " << endl;			
			myArray = new int[num];
			for (int i = 0; i < num; i++)
			{
				cin >> user_input;
				while (checkDigit(user_input) == false)
				{
					cout << "re-enter all integers to fill the array: " << endl;
					cin >> user_input;
				}
				if (checkDigit(user_input) == true)
				{
					myArray[i] = stoi(user_input);		
				}
			}
			cout << second_reverse(myArray, num) << endl;
		}
		else if (option == 3)
		{
			cout << "Please enter integer for triangular number: " << endl;
			cin >> user_input;
			while (checkDigit(user_input) == false)
			{
				cout << "re-enter integer for triangular number: " << endl;
				cin >> user_input;
			}
			if (checkDigit(user_input) == true)
			{
				N = stoi(user_input);		
			}
			cout << third_reverse(N) << endl;
		}
		option = menu.getOption();
	}
	if (option == 4)
	{
		exit(0);
	}
}

