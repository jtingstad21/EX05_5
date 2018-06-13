#include "Account.h"
#include "Date.h"
#include "Transactions.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Account::Account()
{
	id = 0;
	balance = 0;
	annualInterestRate = 0;
}

Account::Account(int id, string name, double balance)
{
	this->id = id;
	this->name = name;
	this->balance = balance;
}

int Account::getID()
{
	return id;
}

double Account::getBalance()
{
	return balance;
}

double Account::getInterestRate()
{
	return annualInterestRate;
}

void Account::setID(int id)
{
	if (id >= 0)
		this->id = id;
}

void Account::setBalance(double balance)
{
	this->balance = balance;
}

void Account::setInterestRate(double interest)
{
	annualInterestRate = interest;
}

double Account::getMonthlyInterestRate()
{
	double monthlyRate = annualInterestRate / 12;
	return monthlyRate;
}

void Account::withdraw(double amount)
{
	this->balance = balance - amount;
	v1.push_back(transaction('w', amount, this->balance, "withdrawl"));
}

void Account::deposit(double amount)
{
	this->balance = balance + amount;
	v1.push_back(transaction('d', amount, this->balance, "deposit"));
}

string Account::getName()
{
	return name;
}

void Account::printTransactions()
{
	for (int i = 0; i < v1.size(); i++)
		cout << v1.at(i) << endl;
}
