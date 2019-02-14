/******************************************************
	Oct 21, 2018

	Lab4 
	Yuxi Zhang

******************************************************/
#ifndef BUILDING_HPP
#define BUILDING_HPP
#include <string>
using std::string;

class Building
{
private:
	string name;
	int size;
	string address;

public:
	Building(string n, int sz, string add);
	string getName();
	int getSize();
	string getAddress();
	~Building();

	
};

#endif
