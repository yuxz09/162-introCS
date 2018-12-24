/***********************************************
** Date: Sept 27th, 2018
*
* Menu cpp
* startchoice: whether start or quit the program
* boardX: row size of board
* boardY: column size of board
* x:initial row location
* y:initial column location
* step:steps count
* ori:initial orientation
* endchoice:whether quit or continue program

* Name: Yuxi Zhang
************************************************/
#include "Menu.hpp"
#include <iostream>
#include <stdlib.h>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stoi;

bool Menu::valid_digit(string input)
{

    bool flag = true;//input start choice is valid
    for (int i = 0; i < input.length() && flag == true; i++)
    {
        if (!isdigit(input[i]))
        {
            flag = false;//there is non-digit in input
        }
    }
    return flag;
}



//get choice for start
int Menu::start()
{
    string user_input;
    int startchoice;
    cout << "Please enter an option for start or quit: " << endl;
    cout << "  1. Start Langton's Ant Simulation" << endl;
    cout << "  2. Quit" << endl;
    cin >> user_input;

    while (!valid_digit(user_input) || ((user_input != "1") && (user_input != "2")))
    {
        cout << "Please re-enter an option for start or quit: " << endl;
        cout << "  1. Start Langton's Ant Simulation" << endl;
        cout << "  2. Quit" << endl;
        cin >> user_input;
    }
    startchoice = stoi(user_input);
    return startchoice;
}

//initialize board row, store them for getter
int Menu::askBoardX()
{
    string user_input;
    int boardX;
    cout << "Please enter number of rows for the board: " << endl;
    cin >> user_input;
    while (!valid_digit(user_input))
    {
        cout << "Please re-enter number of rows for the board" << endl;
        cin >> user_input;
    }
    boardX = stoi(user_input);
    return boardX;
}

//initialize board column, store them for getter
int Menu::askBoardY()
{
    string user_input;
    int boardY;
    cout << "Please enter number of columns for the board:" << endl;
    cin >> user_input;
    while (!valid_digit(user_input))
    {
        cout << "Please re-enter number of columns for the board:" << endl;
        cin >> user_input;
    }
    boardY = stoi(user_input);
    return boardY;
}

//initialize program steps
int Menu::askStep()
{
    string user_input;
    int step;
    cout << "Please enter step of Langton's Ant: " << endl;
    cin >> user_input;
    while (!valid_digit(user_input))
    {
        cout << "Please re-enter step of Langton's Ant:" << endl;
        cin >> user_input;
    }
    step = stoi(user_input);
    return step;
}

//ask user whether random initial location
int Menu::askrandom()
{
    string user_input;
    int rchoice;
    cout << "Would you like to initialize start location randomly" << endl;
    cout << "1. Yes, random" << endl;
    cout << "2. No" << endl;
    cin >> user_input;

    while (!valid_digit(user_input) || ((user_input != "1") && (user_input != "2")))
    {
        cout << "re-enter: Would you like to initialize start location randomly: " << endl;
        cout << "1. Yes, random" << endl;
        cout << "2. No" << endl;
        cin >> user_input;
    }
    rchoice = stoi(user_input);
    return rchoice;
}


//let user define ant's initial location, x- direction
int Menu::askXloc(int xsz)//row size
{
    string user_input;
    int x;
    cout << "Please enter x-direction location of start point" << endl;
    cin >> user_input;

    while (!valid_digit(user_input) ||  stoi(user_input) < 0 || (stoi(user_input) > xsz))
    {
        cout << "Please re-enter x-direction location of start point" << endl;
        cin >> user_input;
    }

    x = stoi(user_input);
//array starts from 0
    return x - 1;
}

//let user define ant's initial location, y- direction
int Menu::askYloc(int ysz)//column size
{
    string user_input;
    int y;
    cout << "Please enter y-direction location of start point" << endl;
    cin >> user_input;

    while (!valid_digit(user_input) ||  stoi(user_input) < 0 || (stoi(user_input) > ysz))
    {
        cout << "Please re-enter y-direction location of start point" << endl;
        cin >> user_input;
    }

    y = stoi(user_input);
//array starts from 0
    return y - 1;
}

//let user define ant's orientation
int Menu::askOri()
{
    string user_input;
    int ori;
    cout << "Please enter starting orientation of the ant: " << endl;
    cout << "1. North " << endl;
    cout << "2. East " << endl;
    cout << "3. South " << endl;
    cout << "4. West " << endl;
    cin >> user_input;
    while ((!valid_digit(user_input)) ||  ( user_input != "1" && user_input != "2" && user_input != "3" && user_input != "4"))
    {
        cout << "re-enter starting orientation of the ant:" << endl;
        cout << "1. North " << endl;
        cout << "2. East " << endl;
        cout << "3. South " << endl;       
        cout << "4. West " << endl;
        cin >> user_input;
    } 
    ori = stoi(user_input);
//array starts from 0, return index of ori array(Ant cpp)
    return ori - 1;
}

//get choice for end
int Menu::end()
{
    string user_input;
    int endchoice;
    cout << "Play again or Quit? " << endl;
    cout << "  1. Play again" << endl;
    cout << "  2. Quit" << endl;
    cin >> user_input;

    while (!valid_digit(user_input) || ((user_input != "1") && (user_input != "2")))
    {
        cout << "re-enter: Play again or Quit? " << endl;
        cout << "  1. Play again" << endl;
        cout << "  2. Quit" << endl;
        cin >> user_input;
    }
    endchoice = stoi(user_input);
    return endchoice;
}



