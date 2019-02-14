#include "Func.hpp"
#include <iostream>
#include <string>
using std::string;
using std::cout;

//since f_reverse parameter is a string, so must pass part of string as parameter
void first_reverse(string str)
{
	if (!str.empty()) //if something in str
	{	
		cout << str.substr(str.length()-1);
		first_reverse(str.erase(str.length()-1));
	}
	else
	{
		cout << "\n";
	}
}
int second_reverse(int *arr, int num)
{
	static int sum = 0;
	if (num != 0)
	{
		sum += arr[num-1];
		second_reverse(arr, num-1);
	}
	return sum;
}

/*********
int second_reverse(int *arr, int num)
{
	static int sum = 0;
	int *newarr = new int[num-1];
	if (num != 0)
	{
		sum += arr[num-1];
		for (int i = 0; i < num-1; i++)
		{
			newarr[i] = arr[i];
		}
	}
	arr = newarr;
	second_reverse(arr, num-1);
	return sum;
}
*********/
// N: up-limit
int third_reverse(int N)
{
	static int tri_num = 0;
	if (N != 0)
	{
		tri_num += N;
		third_reverse(N-1);
	}
	return tri_num;
}
