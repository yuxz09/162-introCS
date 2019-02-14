#include <iostream>
#include "Building.hpp"
#include <string>
using std::string;

//n: name; sz:size; add:address
Building::Building(string n, int sz, string add)
	:name(n), size(sz), address(add)
{

	
}

string Building::getName()
{
	return name;
}

int Building::getSize()
{
	return size;
}

string Building::getAddress()
{
	return address;
}

Building::~Building()
{
	
}