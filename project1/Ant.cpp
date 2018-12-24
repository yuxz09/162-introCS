/***********************************************
** Date: Sept 27th, 2018
*
* Ant cpp:
* member variable:
* ori array: if ++, means turn right, N -> E -> S -> W(assume from north here)
* 			 if --, means turn left,  N -> W -> S -> E(assume from north here)
* 			 
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

************************************************/
#include "Board.hpp"
#include "Ant.hpp"


int ori[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};//North, East, South, West


//store ant's current location of board in Ant class, x-direction(row)
void Ant::setX(int x)
{
    xloc = x;
}

//store ant's current location of board in Ant class, y-direction(column)
void Ant::setY(int y)
{
    yloc = y;
}

//get ant's current location of board in Ant class, x-direction(row)
int Ant::getX()
{
    return xloc;
}

//get ant's current location of board in Ant class, y-direction(column)
int Ant::getY()
{
    return yloc;
}

//keep track of orientation of ant, setter
void Ant::setOri(int curori)
{
    antcurori = curori;
}

//keep track of orientation of ant, getter
int Ant::getOri()
{
    return antcurori;
}

//setter for ant's limit, x-direction(row)
void Ant::setXlimit(int x_limit)
{
    xlimit = x_limit;
}

//setter for ant's limit, y-direction(column)
void Ant::setYlimit(int y_limit)
{
    ylimit = y_limit;
}

//change orientation, change index of ori array, but do not move now
void Ant::changeori(char color, int ori)
{
//parameter ori get from main function(keep track of ant's orientation), and assign it to antcurori(current orientation)in ant class
    antcurori = ori;

//change orientation according to current color 
    if (color == ' ')
    {
        antcurori++;
        antcurori = (antcurori + 4) % 4;
    }
    else
    {
        antcurori--;
        antcurori = (antcurori + 4) % 4;
    }
}

//move x-direction(row), according to ori array
int Ant::moveX(int x, int curori)
{
//firstly, calculate new location
    x = x + ori[curori][0];
//secondly, check if new location out of bounds, set row to zero
    if (x < 0 || x >= xlimit)
    {
        x = 0;
    }
    return x;
}

//move y-direction(column), according to ori array
int Ant::moveY(int y, int curori)
{
//firstly, calculate new location
    y = y + ori[curori][1];
//secondly, check if new location out of bounds, set column to zero
    if (y < 0 || y >= ylimit)
    {
        y = 0;
    }
    return y;
}



Ant::~Ant()
{

}
