/***********************************************
* Date: Sept 25th, 2018
* CS 162 
* Lab2:	Matrix Calculator
* Name: Yuxi Zhang
* VERSION 1.0

ask user for element of array and store in array
************************************************/
#include "readMatrix.hpp"
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

void readMatrix(int **m, int sz)
{
    cout << "Fill the Matrix" << endl;

    for (int i = 0; i < sqrt(sz); i++)
    {
    	for (int j = 0; j < sqrt(sz); j++)
    	{
    		cin >> m[i][j];
    	}
    }

}
/***********************************************
    string s;
    getline(cin, s);
    //check is digit every character

    bool flag = true;
    int num = 0;
    for (int i = 0; i < s.length() && flag == true; i++)
    {
        if (!isdigit(s[i]) && s[i] != ' ' && s[i] != '\n')
        {
            flag = false;
            cout << "it is not a digit, please re-enter: ";
        }
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
        {
            num = num * 10 + (s[i] - '0'); //one requirement: this statement will only works for all digit are positive
        }

    }

    for (int i = sqrt(sz) - 1; i >= 0; i--)
    {
        for (int j = sqrt(sz) - 1; j >= 0; j--)
        {
            m[i][j] = num % 10;
            num = num / 10;
        }

    }
**********************************************/








