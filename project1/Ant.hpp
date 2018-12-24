/***********************************************
** Date: Sept 27th, 2018
*
* Ant hpp:
* member variable:
* x: ant's current location of row(function parameter)  x-direction(row)
* y: ant's current location of column(function parameter) y-direction(column)

* xloc: ant's current location of row(member variable)  x-direction(row)
* yloc: ant's current location of column(member variable)  y-direction(column)

* curori: ant's current orientation(function parameter)
* ori: ant's current orientation(function parameter)
* antcurori: ant's current orientation(member variable)
*
* x_limit: ant's limit x- (function parameter)  x-direction(row)
* y_limit: ant's limit y- (function parameter)  y-direction(column)
* 
* xlimit: ant's limit x- (member variable)  x-direction(row)
* ylimit: ant's limit y- (member variable)   y-direction(column)
*
* color: current cell color
*
*
* member function
*
* setter for ant's current location
* setter for ant's current orientation
* getter for ant's current location
* getter for ant's current orientation
*
* setter for ant's limit(use for check if ant's move to edge)
* change orientation
*
* Name: Yuxi Zhang

************************************************/

#ifndef ANT_HPP
#define ANT_HPP

class Ant
{
private:
//ant's current location
	int xloc;
	int yloc;
//ant's current orientation
	int antcurori; //ant's current orientation, index of ori array, 0, 1, 2, 3

//ant's move limit
	int xlimit;
	int ylimit;	

public:

//setter for ant's current location
	void setX(int x);
	void setY(int y);
//setter for ant's current orientation
	void setOri(int curori);

//getter for ant's current location
	int getX();
	int getY();
//getter for ant's current orientation
	int getOri();

//setter for ant's limit
	void setXlimit(int x_limit);
	void setYlimit(int y_limit);

//change orientation of ant
	void changeori(char color, int ori); 
//return ant's location in x- row direction after move, new location
	int moveX(int x, int curori);
//return ant's location in y- row direction after move, new location
	int moveY(int y, int curori);

	~Ant();

};
#endif

