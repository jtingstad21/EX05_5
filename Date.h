#pragma once
class Date
{
private:
	int year;
	int month;
	int day;

public:
	Date();
	Date(int year, int month, int day);

	int getYear();
	int getMonth();
	int getDay();

	void setDate(int elapsedTime);
};
