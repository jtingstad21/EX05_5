#include "Transactions.h"
#include "Account.h"
#include "Date.h"
#include <iostream>
#include <vector>
using namespace std;

transaction::transaction(char type, double amount, double balance, string description)
{
	this->type = type;
	this->amount = amount;
	this->balance = balance;
	this->description = description;
}
