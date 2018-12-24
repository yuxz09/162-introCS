/***********************************************
** Date: Sept 27th, 2018
*
* Langton's Ant rule(my design)
1. If the ant is on a black square, it turns left 90 degrees and moves forward one unit.
2. If the ant is on a white square, it turns right 90 degrees and moves forward one unit.
3. When the ant leaves a square, it inverts the color.

* Name: Yuxi Zhang
* VERSION 2.0
* 
* Design:
* initialize board color as 'white'
* Let user choose boardSize
* Let user choose step 
* ask user whether let start location randomly  (EXTRA POINTS)
* Let user choose start point, x- direction location and y- direction location
* Let user choose orientation
* follow design ruls above move, print board before any move and print board after each move
*
* 
*
* variable:
* curX: ant's current location, x- row direction
* curY: ant's current location, y- column direction
* xsize: row size of board
* ysize: column size of board
* step: how many step ant's move
* start_x: initial x-(row) direction location of ant
* start_y: initial y-(column) direction location of ant
* user_start: let user choose whether start the program or quit, start()
* user_end: let user choose whether continue the program or quit, end()
* curori: current ant's orientation
* curcolor: board cell color of ant's location
************************************************/
#include "Ant.hpp"
#include "Board.hpp"
#include "Menu.hpp"

#include <iostream>
#include <stdlib.h> 
#include <cmath>
using namespace std;

int main()
{
//intance of class
    Menu user_menu;
    Ant user_ant;
    Board user_board;

//user choice, Menu
    int user_start;
    int user_end;

//store user choice for whether start
    user_start = user_menu.start();

    int curX;
    int curY;
    int xsize;
    int ysize;
    int step;
    int start_x;
    int start_y;
    int curori;
    char curcolor;
//At the start of simulation, ask user would like to use a random starting location for the ant. 
    int ifrandom;

//if start() or end() return 1, means start the program
    while (user_start == 1 || user_end == 1)
    {
//once start the program, let user_end decide whether continue the program
        user_start = 0;

//Board init:
//let user choose board size, both X-/row and Y-/column
        xsize = user_menu.askBoardX();
        ysize = user_menu.askBoardY();

//store xsize and ysize in user_board object as boardX, boardY, for print() use
        user_board.setBoardX(xsize);
        user_board.setBoardY(ysize);
//initialize board with xsize and ysize, return a dynamically board, all in white
        user_board.initBoard(xsize, ysize);

//step:
//let user define step of program
        step = user_menu.askStep();

        ifrandom = user_menu.askrandom(); 

        if (ifrandom == 1)
        {
//start location can be a random number from 0 to board size -1
            start_x = rand() % xsize;
            start_y = rand() % ysize;
        }   
        else
        {
            //let user define ant's initial location
            start_x = user_menu.askXloc(xsize);
            start_y = user_menu.askYloc(ysize);
        }  


//initialize ant's start orientation(if input ori = 1, then ori - 1 = 0, index of {-1, 0}, north)
        curori = user_menu.askOri();

//pass ant's current location from main class to Ant class
        user_ant.setX(start_x);
        user_ant.setY(start_y);
        user_ant.setOri(curori);


//keep track of ant's location and orientation and board color(for further judge)
        curX = user_ant.getX();
        curY = user_ant.getY();
        curori = user_ant.getOri();
        curcolor = user_board.getColor(curX, curY);

//set ant's limit and store xsize and ysize in ant class for move function
        user_ant.setXlimit(xsize);
        user_ant.setYlimit(ysize);
        user_board.print(curX, curY);


//count backwards from step
        while(step--)
        {
            user_ant.changeori(curcolor, curori);
            curori = user_ant.getOri();
            user_board.flip(curX, curY);
            curX = user_ant.moveX(curX, curori);
            curY = user_ant.moveY(curY, curori);
            curcolor = user_board.getColor(curX, curY);
            user_board.print(curX, curY);
            user_board.deleteBoard();////////add
           // user_ant.deleteAnt();
        }
        user_end = user_menu.end();
    }
/****
    if (user_start == 2 || user_end == 2)
    {
        exit(0); 
        //directly ends program will not call destructor
    }
****/
    return 0;
}


