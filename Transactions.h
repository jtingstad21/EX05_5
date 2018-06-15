#pragma once
class transaction
{
private:
	Date date;
	char type;
	double amount;
	double balance;
	string description;

public:
	transaction(char type, double amount, double balance, string description);
	
	//PT -- probably need some get functions here for your member variables.
};
