/***********************************************
** Date: Sept 27th, 2018
*
* boardx: row size of board(function parameter)
* boardy: column size of board(function parameter)
* boardX: row size of board(member variable)
* boardY: column size of board(member variable)
*
* x: ant's current location of row(function parameter)
* y: ant's current location of column(function parameter)

* Name: Yuxi Zhang
* VERSION 1.0

Put all functions related to board in board class
************************************************/
#include "Board.hpp"
#include <iostream>
using std::cout;
using std::endl;

//set board x- direction(row) size 
void Board::setBoardX(int boardx)
{
    boardX = boardx;
}

//set board y- direction(column) size
void Board::setBoardY(int boardy)
{
    boardY = boardy;
}

//initialize board with row size and column size
void Board::initBoard(int boardx, int boardy)
{
//dynamically allocate a 2D array for board
    board = new char *[boardx];
    for (int i = 0; i < boardx; i++)
    {
        board[i] = new char [boardy];
    }
//initial board as white color, ' '
    for (int i = 0; i < boardx; i++)
    {
        for (int j = 0; j < boardy; j++)
        {
            board[i][j] = ' ';
        }
    }
}

//pass ant's current location and flip it color
void Board::flip(int x, int y)
{
//if cell's color is white, flip to black
    if (board[x][y] == ' ')
    {
        board[x][y] = '#';
    }
//if cell's color is black, flip to white
    else
    {
        board[x][y] = ' ';
    }
}
//get current location color and let main function to keep track color
char Board::getColor(int x, int y)
{
    return board[x][y];
}


//print board color
void Board::print(int x, int y)
{
    cout << "*************** Now print the board ***************" << endl;
//swap color for output
//store ant's current location color on board as temp
    char temp = board[x][y];

//output ant's current location '*'
    board[x][y] = '*';
    for (int i = 0; i < boardX; i++)
    {
        for (int j = 0; j < boardY; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
//put back current location color 
    board[x][y] = temp;
}

void Board::deleteBoard()
{
    for (int i = 0; i < boardX; i++)
    {
        delete[] board[i];
    }
    delete[] board;
}
/***
//destructor of Board
Board::~Board()
{
    for (int i = 0; i < boardX; i++)
    {
        delete[] board[i];
    }
    delete[] board;
}
***/





