#ifndef MENU_HPP
#define MENU_HPP

class Menu
{
private:
	int choice;
public:
	Menu();
	void start();
	int getChoice();
	bool userWantsContinue();

};
#endif