#include "Date.h"

Date::Date()
{
	year = 0;
	month = 0;
	day = 0;
}

Date::Date(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}

int Date::getYear()
{
	return year;
}

int Date::getMonth()
{
	return month;
}

int Date::getDay()
{
	return day;
}

void Date::setDate(int elapsedTime)
{
	int numOfDays = elapsedTime / (3600 * 24);
	day = day + numOfDays;
}
