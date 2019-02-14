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

#include "outputLetters.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <locale> 
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;
using std::ifstream;
using std::ofstream;

void output_letters(ofstream& fname, int* freq)
{
//output file name, let user enter in
	string output_fname;
	cout << "which filename to output?" << endl;
	cin >> output_fname;
	fname.open(output_fname.c_str(), ios::out);

//write frequency array into it
//cannot open file
	if (!fname)
	{
		cout << "Error opening file." << endl;
	}
//open file
	else
	{
		for (int cnt = 0; cnt < 26; cnt++)
		{
		//write frequency array on file
			fname << static_cast<char>(cnt + 65) << ": " << *(freq+cnt) << endl;
		} 
		//used and closed the file
		fname.close();
	}	
}