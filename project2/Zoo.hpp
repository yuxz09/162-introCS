/***********************************************
** Date: Oct 15th, 2018
* Name: Yuxi Zhang
* VERSION 1.0

TigerArr: array of Tiger objects
PandaArr: array of Panda objects
PenguinArr: array of Penguin objects
TurtleArr: array of Turtle objects	
************************************************/
#ifndef ZOO_HPP
#define ZOO_HPP
#include "Animal.hpp"//access Money
#include "Tiger.hpp"//access Money
#include "Penguin.hpp"//access Money
#include "Turtle.hpp"//access Money
#include <string>
using std::string;

class Zoo
{
private:
    Tiger *arrTiger;
    Penguin *arrPenguin;
    Turtle *arrTurtle;


    int tiger_arrsize;
    int penguin_arrsize;
    int turtle_arrsize;

//current how many number of animals
    int tigernum;
    int penguinnum;
    int turtlenum;
    int total;

    bool todayBonus;

public:
    static int Money;
    //default constructor for building Zoo object and initialize all animals dynamic array
    Zoo();
    void buyTiger();
    void buyTurtle();
    void buyPenguin();
    void init();

    void tigerDie();
    void penguinDie();
    void turtleDie();

    void display(int amount1, int amount2, int amount3);

    void tigerResize();
    void penguinResize();
    void turtleResize();

    void randomevent();
    void MoneyMoney();
    void buyAdult();



    bool getBonus();
    void feed();
    void run();
    ~Zoo();



};

#endif
