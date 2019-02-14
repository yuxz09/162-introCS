/******************************************************
	Oct 13, 2018

	Lab3 Die
	Yuxi Zhang

******************************************************/


#ifndef DIE_HPP
#define DIE_HPP

class Die
{
public:
	//represents the number of sides on the individual die
	//define this as public so that LoadedDie can inherit
	int N;

	//use member initialize list to initialize by override default constructor
	//the value of a variable can only be set in an initialization list of a constructor belonging to the same class as the variable.
	Die(int sides)
		:N(sides)
	{
		
	}
	//return random integer as result of rolling die once
	//sides: how many number of sides of die
	virtual int rolling(int sides);

	virtual ~Die();

};
#endif
