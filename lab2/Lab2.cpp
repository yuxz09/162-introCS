/***********************************************
** Date: Oct 7th, 2018
*
* CS162 Lab2
* 
* fname: ifstream and ofstream object
* freq: frequency array, each character occurrence
* 
* Name: Yuxi Zhang

************************************************/
#include "countLetters.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <locale> 
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;
using std::ifstream;
using std::ofstream;
using std::stringstream;
using std::getline;


int main()
{
//variable for file handling
//create an object of fstream
	ifstream infile;
	string filename;

//wordCnt array count frequency, argument
	int *wordCnt;

//get the filename from the user
	cout << " Which file would you like to read, enter filename: " << endl;
	cin >> filename;


//open the file
//c_str() a member function, return a copy of object's contents formatted as a null-terminated C-string
	infile.open(filename.c_str(), ios::in);

	if (infile.fail())// if (!file)
	{
		cout << "The file was not found. " << endl;
		return 1;
	}
	else
	{
		//two arguments: object of fstream, frequency array of letters
		count_letters(infile, wordCnt);
	
	}
}


