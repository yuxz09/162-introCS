/******************************************************
	Oct 21, 2018

	Lab4 
	Yuxi Zhang

Description:
University includes:(not inheritance)
Building
Person

Person includes:(inheritance)
Instructor
Student

age,rating,GPA all random number, get in main and pass as member initialization list to initialize it

******************************************************/
#include <iostream>
#include <cstdlib>
using std::cin;
using std::cout;
using std::endl;
#include "University.hpp"
#include "Building.hpp"
#include "Person.hpp"
#include "Student.hpp"
#include "Instructor.hpp"
#include "Menu.hpp"

int main()
{
	srand(time(0));
	int rand_age1 = rand() % 10 + 17; 
	int rand_age2 = rand() % 10 + 17; 
	int rand_age3 = rand() % 10 + 23; 
	double rand_gpa1 = rand() % 41 / 10.0;
	double rand_gpa2 = rand() % 41 / 10.0;
	double rand_rating1 = rand() % 51 / 10.0;
	int rand_age4 = rand() % 10 + 17; 
	int rand_age5 = rand() % 10 + 23; 
	double rand_gpa3 = rand() % 41 / 10.0;
	double rand_rating2 = rand() % 51 / 10.0;

	Student stu1("Kelly", rand_age1, rand_gpa1);
	Student stu2("Joe", rand_age2, rand_gpa2);
	Instructor instructor1("Wendy", rand_age3, rand_rating1);
	Student stu3("Royce", rand_age4, rand_gpa3);
	Instructor instructor2("Bibby", rand_age5, rand_rating2);

	Building build1("engineering", 6000, "157 fifth avenue");
	Building build2("science", 14500, "617 fifth avenue");

	University OSU("Oregon State University");
	OSU.addnewBuilding(&build1);
	OSU.addnewBuilding(&build2);

	OSU.addnewPerson(&stu1);
	OSU.addnewPerson(&stu2);
	OSU.addnewPerson(&instructor1);
	vector <Person*> curpeople;

	Menu menu;
	int count = 1;
	string user_input;
	int choice = menu.getOption();
	if (choice == 1)
	{
		OSU.printInfo_building();
	}
	else if (choice == 2)
	{
		OSU.printInfo_people();
	}
	else if (choice == 4)
	{
		cout << "quit" << endl;
		exit(0);
	}
	else if (choice == 3)
	{
		curpeople = OSU.getPeople();
		cout << "Please enter the number before person's name: " << endl;
		for (int i = 0; i < curpeople.size(); i++)
		{
			cout << count << ": " << curpeople[i] -> getName() << endl;
			count++;
		}

		choice = menu.getPerson_choice();
		curpeople[choice-1]->do_work();
	}




//EXTRA CREDIT
   
//	cout << stu3 << endl;
//	cout << instructor2 << endl;
	return 0;
}







