#include "Date.h"

Date::Date()
{
}

Date::Date(int day, int month, int year)
{
	this->dateDay = day;
	this->dateMonth = month;
	this->dateYear = year;
}

int Date::getDay()
{
	return this->dateDay;
}

int Date::getMonth()
{
	return this->dateMonth;
}

int Date::getYear()
{
	return this->dateYear;
}

void Date::setDay(int day)
{
	this->dateDay = day;
}

void Date::setMonth(int month)
{
	this->dateMonth = month;
}

void Date::setYear(int year)
{
	this->dateYear = year;
}

Date::~Date()
{
}
