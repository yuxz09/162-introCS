/***********************************************
* Date: Sept 25th, 2018
* CS 162 
* Lab2:	Matrix Calculator
* Name: Yuxi Zhang
* VERSION 1.0

source file for calculating determinant
************************************************/

#include "Determinant.hpp"
#include <cmath>


int determinant(int **arr, int size)
{
	int d = 0;
	for (int j = 0; j < sqrt(size); j++)
	{
		if (size == 4)
		{
			d = arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
		}
		if (size == 9)
		{
			d = arr[0][0] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1]) - arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0]) + arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]);
		}

	}
	return d;
}

/***********************************************
try:
not use hardcode
but use recursion

	int s = 1;//'s' sign, positive when odd order or negative when even order
	int c = 0;

	
	for (int j = 0; j < size; j++)
	{
		if (j % 2 == 0)
		{
			s = 1;
		}
		if (j % 2 == 1)
		{
			s = -1;
		}
		c = array[0][j] * s;
		while (size != 2)//
		{
			for (int m = 0, x = 0; m < size, x < size-1; m++, x++)
			{
				for (int n = 0, y = 0; n < size, y < size - 1; n++, y++)
				{
					int temp[size-1][size-1];
					if (n != j)
					{
						temp[x][y] = array[m][n];
					}

				}
			}
		}
		int temp[n][n];
	}
************************************************/


