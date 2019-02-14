/********************************

CS162 Lab8 
Searching and Sorting
Zhang Yuxi
Nov 17th, 2018
********************************/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Search.hpp"
#include "Sort.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::vector;
using std::ios;

//readfile function takes string and vector as arguments
//string: filename
//vector: number reads in vector<int>, pass by reference so that it can push numbers in vector
void readfile(string str, vector <int> &v)
{
	ifstream inputFile;
	int num;
	inputFile.open(str.c_str());

	if (inputFile)
	{
		while (inputFile >> num)
		{
			v.push_back(num);
		}
	}
	else
	{
		cout << str << "  can not open the file" << endl;
	}

	inputFile.close();
	//for read multiple files
	inputFile.clear();
}

//valueIndex: position target value at
//string: filename numbers stored in
void output(int valueIndex, string str)
{
	cout << str << ": ";
	//not found
	if (valueIndex == -1)
	{
		cout << "target value not found" << endl;
	}
	else
	{
		cout << "target value at: " << valueIndex + 1 << endl;
	}
}


//writefile takes vector, int and string as arguments
//vector<int> 
//int sz: vector size, used for "for loop"
//string str: file name
void writefile(vector <int> v, int sz, string str)
{
	ofstream outputFile;

	outputFile.open(str.c_str());

	for (int i = 0; i < sz; i++)
	{
		//write vector contents in file
		outputFile << v[i];
	}
	outputFile.close();
}

bool checkDigit(string str)
{
	bool flag = true;//is digit
	for (int i = 0; i < str.length() && flag == true; i++)
	{
		if (!isdigit(str[i]))
		{
			flag = false;
		}
	}
	return flag;
}
//ask for target value
int askTargetValue()
{
	string user_input;
	cout << "Enter target value: " << endl;
	cin >> user_input;
	int target;
	if (!checkDigit(user_input))
	{
		cout << "re-enter target value: " << endl;
		cin >> user_input;
	}
	target = stoi(user_input);
	return target;
}

int main()
{
	//file name
	string filename_ori;
	string filename_first;
	string filename_second;
	string filename_third;

	//target value, gets from menu class
	int target;

	//define vector for files
	vector <int> ori_vect;
	vector <int> first_vect;
	vector <int> second_vect;
	vector <int> third_vect;

	//search target value position of each vector
	int search_ori;
	int search_first;
	int search_second;
	int search_third;

	//sort target value position of each vector
	int sort_search_ori;
	int sort_search_first;
	int sort_search_second;
	int sort_search_third;

	//get file name for read
	cout << "enter an input file name for original: " << endl;
	getline(cin, filename_ori);


	cout << "enter an input file name for first: " << endl;
	getline(cin, filename_first);


	cout << "enter an input file name for second: " << endl;
	getline(cin, filename_second);


	cout << "enter an input file name for third: " << endl;
	getline(cin, filename_third);

	
	//read number from file in array, fill the array and return size of array
	readfile(filename_ori, ori_vect);
	readfile(filename_first, first_vect);
	readfile(filename_second, second_vect);
	readfile(filename_third, third_vect);

	//get each vector size
	int ori_vect_size = ori_vect.size();
	int first_vect_size = first_vect.size();
	int second_vect_size = second_vect.size();
	int third_vect_size = third_vect.size();



	Search search;
	//ask target value in menu class
	target = askTargetValue();

	cout << "what is target value: " << endl;
	cout << target << endl;

	cout << "-------------simple search--------------" << endl;
	//simple search
	search_ori = search.simpleSearch(ori_vect, ori_vect_size, target);
	output(search_ori, "original.txt");

	search_first = search.simpleSearch(first_vect, first_vect_size, target);
	output(search_first, "first.txt");

	search_second = search.simpleSearch(second_vect, second_vect_size, target);
	output(search_second, "second.txt");

	search_third = search.simpleSearch(third_vect, third_vect_size, target);
	output(search_third, "third.txt");

	Sort sort;
	cout << "-------------sort--------------" << endl;
	//sort
	sort.selectSort(ori_vect, ori_vect_size);
	sort.selectSort(first_vect, first_vect_size);
	sort.selectSort(second_vect, second_vect_size);
	sort.selectSort(third_vect, third_vect_size);

	//write file sorted array
	cout << "enter a file name for writing original array in outputfile: " << endl;
	cin.ignore();
	getline(cin, filename_ori);
	writefile(ori_vect, ori_vect_size, filename_ori);

	cout << "enter a file name for writing first array in outputfile: " << endl;
	getline(cin, filename_first);
	writefile(first_vect, first_vect_size, filename_first);

	cout << "enter a file name for writing second array in outputfile: " << endl;
	getline(cin, filename_second);
	writefile(second_vect, second_vect_size, filename_second);

	cout << "enter a file name for writing third array in outputfile: " << endl;
	getline(cin, filename_third);
	writefile(third_vect, third_vect_size, filename_third);

	cout << "-------------binary search--------------" << endl;
	cout << "what is target value: " << endl;

	cout << target << endl;

	sort_search_ori = search.binarySearch(ori_vect, ori_vect_size, target);
	sort_search_first = search.binarySearch(first_vect, first_vect_size, target);
	sort_search_second = search.binarySearch(second_vect, second_vect_size, target);
	sort_search_third = search.binarySearch(third_vect, third_vect_size, target);

	output(sort_search_ori, filename_ori);
	output(sort_search_first, filename_first);
	output(sort_search_second, filename_second);
	output(sort_search_third, filename_third);

	return 0;

}




