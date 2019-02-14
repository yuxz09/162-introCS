#include <iostream>
#include <vector>
#include "Search.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::vector;

//linear search
int Search::simpleSearch(vector <int> &v, int sz, int target_value)
{
	int index = -1;
	for (int i = 0; i < sz; i++)
	{
		if ( v[i] == target_value)
		{
			index = i;
		}
	}
	return index;
}

int Search::binarySearch(vector <int> &v, int sz, int target_value)
{
	int index = -1;
	int start = 0;
	int end = sz - 1;
	bool found = false;
	int middle;
	while (!found && start <= end)
	{
		middle = (start + end) / 2;

		if (v[middle] == target_value)
		{
			found = true;
			index = middle;
		}
		else if (v[middle] < target_value)
		{
			start = middle + 1;

		}
		else// v[middle] > target_value
		{
			end = middle - 1;
		}
	}
	return index;
}

