
#include "countLetters.hpp"
#include "outputLetters.hpp"


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

void count_letters(ifstream& fname, int* freq)
{
//a pointer to an array of integers
	freq = new int[26];
	for (int i = 0; i < 26; i++)
	{
		freq[i] = 0;
	}
//peek first character of fname until EOF
	char ch;
	ofstream ofname;
	ch = fname.peek();
//while loop, not End Of File, including '\n'
	while (ch != EOF)
	{
		//read paragraph
		stringstream paragraph;
		//use getline to read line by line
    	string line;

	   	do
		{
			getline( fname , line );
			paragraph << line;
		} while( line.compare("\n") == 0);
		//store paragraph into string 
		string parastr = paragraph.str();

		//read the whole string and count letters
	    for (int i = 0; i < parastr.length(); i++)
	    {
	    	//read one-by-one
	    	ch = parastr[i];
	    	//convert to all uppercase
	    	ch = toupper(ch);
			//read file one character at a time		
			if(ch >= 'A' && ch <= 'Z')
			{
				freq[ch - 65]++;			
			}

	    }
	    //call output function
		output_letters(ofname, freq);
		//set all frequency array number as 0 and recount
		for (int i = 0; i < 26; i++)
		{
			freq[i] = 0;
		}
		ch = fname.peek();	

//close the file
	}
	fname.close();

	delete []freq;

}