/***********************************************
** Date: Sept 27th, 2018
*
* Menu hpp


* Name: Yuxi Zhang

************************************************/

#ifndef MENU_HPP
#define MENU_HPP
#include <string>
using std::string;

class Menu
{
public:
	bool valid_digit(string input);
//let user set start choice
    int start();

//let user set board row and column
    int askBoardX();
    int askBoardY();

//let user set step
    int askStep();

//ask user whether random initial location
    int askrandom();
//let user define ant's initial location
    int askXloc(int xsz);//row size
    int askYloc(int ysz);//column size
//let user define ant's orientation
    int askOri();

//let user set end choice
    int end();

};
#endif