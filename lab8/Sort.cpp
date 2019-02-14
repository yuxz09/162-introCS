#include <iostream>
#include <vector>
#include "Sort.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::vector;


//selectSort
void Sort::selectSort(vector <int> &v, int size)
{
	int startScan, minIndex, minValue;

	//each time, set the first scan one as min value, and put true min value in rest on scan one position
	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = v[startScan];

		//find the min value among rest of vector
		for (int index = startScan + 1; index < size; index++)
		{
			if (v[index] < minValue)
			{
				minValue = v[index];
				minIndex = index;
			}
		}
		//exchange value startScan with min value
		v[minIndex] = v[startScan];
		//always put the min value in first of array
		v[startScan] = minValue;
	}
}
//selectSort cited from early objects 9th