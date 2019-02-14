/***********************************************
* Date: Sept 25th, 2018
* CS 162 
* Lab2:	Matrix Calculator
* Name: Yuxi Zhang
* VERSION 1.0


************************************************/

#include "readMatrix.hpp"
#include "Determinant.hpp"
#include <iostream>
#include <cmath>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;
int main()
{
    int row, column;
    int sz;
    int d = 0;
    cout << "Enter the size of matrix, 2 * 2 or 3 * 3, input 4 or 9:" << endl;
    cin >> sz;
    cin.ignore();
    row = sqrt(sz);
    column = sqrt(sz);

//dynamically allocate a 2D array
    int **a = new int *[row];
    for (int i = 0; i < row; i++)
    {
        a[i] = new int[column];
    }

//The function should prompt the user for all the numbers within the matrix
    readMatrix(a, sz);
//Calculate the determinant using determinant().
    d = determinant(a, sz);

//Display both the matrix and the determinant to the user
    for (int i = 0; i < sqrt(sz); i++)
    {
        for (int j = 0; j < sqrt(sz); j++)
        {
            if (j != 0)
            {
                cout << " ";
            }
            cout << a[i][j];
        }
        cout << endl;
    }
    cout << "determinant: " << d << endl;

    for (int i = 0; i < row; i++)
    {
        delete[] a[i];
    }
    delete[] a;
}