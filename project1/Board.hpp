/***********************************************
** Date: Sept 27th, 2018
*
* Board class:
* boardX: row size of board(member variable)
* boardY: column size of board(member variable)
* char **board: board(member variable)
* 
* x: ant's current location of row(function parameter), from main function
* y: ant's current location of column(function parameter), from main function

* boardx: x- direction(row)
* boardy: y- direction(column)
* 
* Name: Yuxi Zhang
* VERSION 1.0

************************************************/

#ifndef BOARD_HPP
#define BOARD_HPP

class Board
{
private:
//initialize board row and column, store them for other function use
    int boardX;
    int boardY;
    char **board;

public:
//store row and column for edge case use
    void setBoardX(int x);
    void setBoardY(int y);

//initialize board with two arguments: r(row) and c(column) size
    void initBoard(int boardx, int boardy);

//flip ant's location cell color on board
    void flip(int x, int y);

//return current location color
    char getColor(int x, int y);

//print board after each move, x-, y- ant's current location
    void print(int x, int y);

    void deleteBoard();
//destructor
   // ~Board();
};
#endif











