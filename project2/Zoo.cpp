/***********************************************
** Date: Oct 15th, 2018
*
*
* Name: Yuxi Zhang
* VERSION 2.0
Zoo(): initialize member variables including:
arrTiger: tiger array, size 10
arrPenguin: penguin array, size 10
arrTurtle: turtle array, size 10
tiger_arrsize: keep track of array size, if tiger nuber over 10, double the array size
penguin_arrsize:keep track of array size, if penguin nuber over 10, double the array size
turtle_arrsize:keep track of array size, if turtle nuber over 10, double the array size
tigernum: all tiger number
penguinnum: all penguin number
turtlenum: all turtle number
total: all number of animals
todayBonus: will random event 2, if each tiger get bonus


display(int num1, int num2, int num3): show current amount of each animal
getBonus(): random bonus today
buyTiger: reduce cost
buyPenguin: reduce cost
buyTurtle: reduce cost

init():ask user first day, how many animals they would like to buy

daily routine: in run()
run() : feed() -> random event(die, bonus, give birth) -> MoneyMoney(): calculate payoff(including extra one) -> buyAdult()
ask user if continue game
************************************************/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "Menu.hpp"
#include "Zoo.hpp"
#include "Tiger.hpp"
#include "Penguin.hpp"
#include "Turtle.hpp"
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stoi;

#include "Animal.hpp"//access Money, dynamic array

//define static member
int Zoo::Money = 100000;



Zoo::Zoo()
{
    cout << "#############################################" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#                  START                    #" << endl;
    cout << "#                                           #" << endl;
    cout << "#                                           #" << endl;
    cout << "#############################################" << endl;

    arrTiger = new Tiger[10];
    arrPenguin  = new Penguin[10];
    arrTurtle  = new Turtle[10];

    for (int i = 0; i < 10; i++)
    {
        arrTiger[i] =  Tiger(1, 10000, 1, 50, 2000);
        arrPenguin[i] =  Penguin(1, 1000, 5, 10, 100);
        arrTurtle[i] =  Turtle(1, 100, 10, 5, 5);
    }

    tiger_arrsize = 10;
    penguin_arrsize = 10;
    turtle_arrsize = 10;

    tigernum = 0;
    penguinnum = 0;
    turtlenum = 0;
    todayBonus = false;
}

void Zoo::display(int amount1, int amount2, int amount3)
{
    cout << "----------Now in Zoo-----------" << endl;
    cout << "Tiger: " << amount1 << endl;
    cout << "Penguin: " << amount2 << endl;
    cout << "Turtle: " << amount3 << endl;
}

bool Zoo::getBonus()
{
    return todayBonus;
}

//num:how many user want to buy
void Zoo::buyTiger()
{
    Zoo::Money -= arrTiger[0].getCost();
}


//how many user want to buy
void Zoo::buyPenguin()
{
    Zoo::Money -= arrPenguin[0].getCost();
}

 //how many user want to buy
void Zoo::buyTurtle()
{
    Zoo::Money -= arrTurtle[0].getCost();
}

void Zoo::init()
{
    string user_input;
    cout << "Start!!!" << endl;
    cout << "You have: 100,000 dollars " << endl;

//buy Tiger
    cout << "How many Tigers would you like to buy now: (1 or 2)" << endl;

    cin >> user_input;

    while ( user_input != "1" && user_input != "2")
    {
        cout << "re-enter: " << endl;
        cin >> user_input;
    }
    tigernum = stoi(user_input);
    for (int i = 0; i < tigernum; i++)
    {
        buyTiger();
    }
    cout << "rest money: " << Money << endl;

//buy Penguin
    cout << "How many Penguins would you like to buy now: (1 or 2)" << endl;
    cin >> user_input;
    while (user_input != "1" && user_input != "2")
    {
        cin >> user_input;
    }
    penguinnum = stoi(user_input);    
    buyPenguin();
    cout << "rest money: " << Money << endl;

//buy Turtle
    cout << "How many Turtles would you like to buy now: (1 or 2)" << endl;
    cin >> user_input;
    while (user_input != "1" && user_input != "2")
    {
        cin >> user_input;
    }
    turtlenum = stoi(user_input);
    buyTurtle();
    cout << "rest money: " << Money << endl;  

    display(tigernum, penguinnum, turtlenum);
}

void Zoo::tigerDie()
{
    int index = rand() % tigernum;//0 ~ tigernum-1
    for (int i = index; i < tigernum; i++)
    {
        arrTiger[i] = arrTiger[i+1];
    }
    arrTiger[tigernum-1] = Tiger(1, 10000, 1, 50, 2000);
    tigernum--;
}

void Zoo::penguinDie()
{
    int index = rand() % penguinnum;//0 ~ tigernum-1
    for (int i = index; i < penguinnum; i++)
    {
        arrPenguin[i] = arrPenguin[i+1];
    }
    arrPenguin[penguinnum-1] = Penguin(1, 1000, 5, 10, 100);
    penguinnum--;
}

void Zoo::turtleDie()
{
    int index = rand() % turtlenum;//0 ~ tigernum-1
    for (int i = index; i < turtlenum; i++)
    {
        arrTurtle[i] = arrTurtle[i+1];
    }
    arrTurtle[penguinnum-1] = Turtle(1, 100, 10, 5, 5);
    turtlenum--;
}

void Zoo::tigerResize()
{
    int newsize = tiger_arrsize * 2;
    Tiger *temp = new Tiger[newsize];
    for (int i = 0; i < tiger_arrsize; i++)
    {
        temp[i] = arrTiger[i];
    }
    delete []arrTiger;
    arrTiger = temp;
    tiger_arrsize = newsize;  
} 



void Zoo::penguinResize()
{
    int newsize = penguin_arrsize * 2;
    Penguin *temp = new Penguin[newsize];
    for (int i = 0; i < penguin_arrsize; i++)
    {
        temp[i] = arrPenguin[i];
    }
    delete []arrPenguin;
    arrPenguin = temp;
    penguin_arrsize = newsize;
}

void Zoo::turtleResize()
{
    int newsize = turtle_arrsize * 2;
    Turtle *temp = new Turtle[newsize];
    for (int i = 0; i < turtle_arrsize; i++)
    {
        temp[i] = arrTurtle[i];
    }
    delete []arrTurtle;
    arrTurtle = temp;
    turtle_arrsize = newsize;
}      



void Zoo::feed()
{
    cout << "----------------------------------FOOD--------------------------------" << endl;

    for (int i = 0; i < tigernum; i++)
    {
        arrTiger[i].growUp();
        arrTiger[i].feed();
    }
    cout << "Tiger: feed " << tigernum << "tigers rest Money: " << Money << endl;


    for (int i = 0; i < penguinnum; i++)
    {
        arrPenguin[i].growUp();
        arrPenguin[i].feed();
    }
    cout << "Penguin: feed " << penguinnum << "penguins rest Money: " << Money << endl;


    for (int i = 0; i < turtlenum; i++)
    {
        arrTurtle[i].growUp();
        arrTurtle[i].feed();
    }
    cout << "Turtle: feed " << turtlenum << "turtles rest Money: " << Money << endl;     
}

void Zoo::randomevent()
{
    srand(time(0));
    string user_input;
    int event = 0;//which event
    int type = 0;//which animal to give birth or go die

    bool findAdult = false;//which adult give birth
    int index = -1; //each animal object array, which one will give birth, age >= 3
    int choice = 0;//which choice
    int newborn = 0;//calculate newborn numbers incase exceed
    int newtotal = 0;//add new babies when adult animal give birth  incase exceed

    cout << "----------------------------------RANDOM EVENT--------------------------------" << endl;
    event = rand() % 4 + 1;

    //A sickness occurs
    if (event == 1)
    {

        cout << "One animal got sick and will die." << endl;

        type = rand() % 3 + 1;
        if (type == 1)
        {
            //check at least one tiger in tiger group 
            if (tigernum <= 0)
            {
                cout << "No Tiger in zoo." << endl;
            }
                else
            {
                cout << "One Tiger got sick and die." << endl;
                tigerDie();              
            }
        }
        else if (type == 2)
        {
            if (penguinnum <= 0)
            {
                cout << "No Penguin in zoo." << endl;
            }
            else
            {
                cout << "One Penguin got sick and die." << endl;
                penguinDie();
            }
        }
        else 
        {
            if (turtlenum <= 0)
            {
                cout << "No Turtle in zoo." << endl;
            }
            else
            {
                cout << "One Turtle got sick and die." << endl;
                turtleDie();
            }
        }
        display(tigernum, penguinnum,turtlenum);
    }
    else if (event == 2)
    {
        cout << "Bonus!! Each tiger in zoo will get 250-500 dollars." << endl;
        todayBonus = true;  
    }
    else if (event == 3) 
    {
        cout << "Baby animals born." << endl;
        type = rand() % 3 + 1;
        if (type == 1)
        {
            if (tigernum <= 0)
            {
                cout << "No tiger in zoo" << endl;
            }
            else
            {
                cout << "Baby Tiger!" << endl;
                for (int i = 0; i < tigernum && findAdult == false; i++)
                {
                    if (arrTiger[i].getAge() >= 3)
                    {
                        findAdult = true;
                        newborn += arrTiger[i].getNumberofBabies();
                    }
                }
                newtotal = tigernum + newborn;

                if (newtotal >= tiger_arrsize)
                {
                    tigerResize();
                }//since newtotal = 1
                arrTiger[tigernum] = Tiger(1, 10000, 1, 50, 2000);
            }
            tigernum = newtotal;
        }
        else if (type == 2)
        {
            if (penguinnum <= 0)
            {
                cout << "No Penguin in zoo." << endl;
            }
            else
            {
                cout << "Baby Penguin!" << endl;
                for (int i = 0; i < penguinnum && findAdult == false; i++)
                {
                    if (arrPenguin[i].getAge() >= 3)
                    {
                        cout << "age: " << arrPenguin[i].getAge() << endl;
                        findAdult = true;
                        newborn += arrPenguin[i].getNumberofBabies();
                    }
                }
                newtotal = penguinnum + newborn;
                if (newtotal >= penguin_arrsize)
                {
                    penguinResize();
                }
                for (int i = 0; i < newborn; i++)
                {
                    arrPenguin[penguinnum+i] = Penguin(1, 1000, 5, 10, 100);
                }
                penguinnum = newtotal; 
            }

        }
        else
        {
            if (turtlenum <= 0)
            {
                cout << "No Turtle in zoo." << endl;                
            }
            else
            {
                cout << "Baby Turtle!" << endl;
                for (int i = 0; i < turtlenum && findAdult == false; i++)
                {
                    if (arrTurtle[i].getAge() >= 3)
                    {
                        findAdult = true;
                        newborn += arrTurtle[i].getNumberofBabies();
                    }
                }
                newtotal = turtlenum + newborn;
                if (newtotal >= turtle_arrsize)
                {
                    turtleResize();
                }
                for (int i = 0; i < newborn; i++)
                {
                    arrTurtle[turtlenum+i] = Turtle(1, 100, 10, 5, 5);
                }
            }
            turtlenum = newtotal;                           
        }
        display(tigernum, penguinnum,turtlenum);
    }
    else
    {
        cout << "Nothing happens..." << endl;
    }
}


void Zoo::MoneyMoney()
{
    int extrapayoff = 0;
    cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
    cout << "$                                    $" << endl;
    cout << "$          Today's PAYOFF            $" << endl;
    cout << "$                                    $" << endl;
    cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
    
    display(tigernum, penguinnum,turtlenum);
    for (int i = 0; i < tigernum; i++)
    {
        arrTiger[i].addPayoff();
    }
    cout << "got money from Tigers, we have: Money($) " << Money << endl;

    for (int i = 0; i < penguinnum; i++)
    {
        arrPenguin[i].addPayoff();
    }   
    cout << "got money from Penguins, we have: Money($)" << Money << endl;

    for (int i = 0; i < turtlenum; i++)
    {
        arrTurtle[i].addPayoff();
    }   
    cout << "got money from Turtles, we have: Money($)" << Money << endl;

    if (getBonus() == true)
    {
        todayBonus = false;
        extrapayoff = rand() % 301 + 200;
        cout << "extra payoff from each tiger: " << extrapayoff << endl; 
        for (int i = 0; i < tigernum; i++)
        {
            arrTiger[i].addExtraPayoff(extrapayoff);
        }
    }
    cout << "Money: " << Money << endl;
}

void Zoo::buyAdult()
{
    string user_input;
    int choice;
        cout << "Would you like to buy an adult animal?" << endl;
        cout << "1. Tiger" << endl;
        cout << "2. Penguin" << endl;
        cout << "3. Turtle" << endl;
        cout << "4. Not buy" << endl;
        cin >> user_input;

        while (user_input != "1" && user_input != "2" && user_input != "3" && user_input != "4")
        {
            cout << "Please re-enter an option for the choice " << endl;
            cin >> user_input;
        }
        choice = stoi(user_input);

        if (choice == 1)
        {
            cout << "You will buy an adult Tiger today." << endl;
            tigernum++;
            if (tigernum >= tiger_arrsize)
            {
                tigerResize();                          
            }
            arrTiger[tigernum-1] = Tiger(1, 10000, 1, 50, 2000);
            Money -= arrTiger[tigernum-1].getCost();
            arrTiger[tigernum - 1].setAdultage(3);
        }
        else if (choice == 2)
        {
            cout << "You will buy an adult Penguin today." << endl;
            penguinnum++;
            if (penguinnum >= penguin_arrsize)
            {
                penguinResize();                 
            }
            arrPenguin[penguinnum - 1] = Penguin(1, 1000, 5, 10, 100);
            Money -= arrPenguin[penguinnum - 1].getCost();
            arrPenguin[penguinnum - 1].setAdultage(3); 

        }
        else if (choice == 3)
        {
            cout << "You will buy an adult Turtle today." << endl;
            turtlenum++;
            cout << "after BUYBUYBUY, turtlenum will be: " << turtlenum << endl;
            if (turtlenum >= turtle_arrsize)
            {
                turtleResize();              
            }

            arrTurtle[turtlenum - 1] = Turtle(1, 100, 10, 5, 5);
            Money -= arrTurtle[turtlenum - 1].getCost();             
            arrTurtle[turtlenum - 1].setAdultage(3);

        }
        else
        {
            cout << "You do not want to buy any adult animal today." << endl;
        }
        cout << "rest Money: " << Money << endl;
        display(tigernum, penguinnum,turtlenum);
}


void Zoo::run()
{
    srand(time(0));
    string user_input;
    int choice = 0;


    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "~~~~~~~~~  New day comes ~~~~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    feed();
    if (Money < 0)
    {
        cout << "BROKEN!!!      Game over!!" << endl;
        exit(0);
    }

    randomevent();
    if (tigernum == 0 && turtlenum == 0 && penguinnum == 0)
    {
        cout << "What happens!!!  All animals die!!!" << endl;
        cout << "Game over!!!" << endl;
        exit(0);
    }

    MoneyMoney();
    buyAdult();
    if (Money < 0)
    {
        cout << "Run out of Money!!!  Game over!!!" << endl;
        exit(0);
    }

    cout << "------------------Today's end-------------------" << endl; 
    cout << "continue or quit?" << endl;
    cout << "1. continue" << endl;
    cout << "2. quit" << endl;
    cin >> user_input;
    while ( user_input != "1" && user_input != "2")
    {
        cout << "re-enter your choice: " << endl;
        cin >> user_input;
    }
    choice = stoi(user_input);
    if (choice == 1)
    {
        run();
    }
    else
    {
        exit(0);
    }
} 

Zoo::~Zoo() 
{
    delete []arrTiger;
    delete []arrPenguin;
    delete []arrTurtle;
}











