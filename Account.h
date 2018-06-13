#pragma once
#include <vector>
#include <string>
class Account
{
private:
	int id;
	double balance;
	static double annualInterestRate;
	string name;
	vector<transaction> v1;

public:
	Account();
	Account(int id, string name, double balance);

	int getID();
	double getBalance();
	double getInterestRate();

	void setID(int id);
	void setBalance(double balance);
	void setInterestRate(double interest);

	double getMonthlyInterestRate();

	void withdraw(double amount);

	void deposit(double amount);

	string getName();

	void printTransactions();
};
