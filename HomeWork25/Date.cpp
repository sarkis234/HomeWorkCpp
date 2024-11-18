#include "Date.h"

Date::Date()
{
}

Date::Date(int day, int month, int year)
{
	if (day > 30) day = 30;
	if (month > 12) month = 12;
	this->day = day;
	this->month = month;
	this->year = year;
}

Date::Date(Date& date)
{
	this->day = date.day;
	this->month = date.month;
	this->year = date.year;
}

Date::~Date()
{
}

int Date::getDay()
{
	return this->day;
}

int Date::getMonth()
{
	return this->month;
}

int Date::getYear()
{
	return this->year;
}

void Date::setDay(int day)
{
	this->day = day;
}

void Date::setMonth(int month)
{
	this->month = month;
}

void Date::setYear(int year)
{
	this->year = year;
}

void Date::print()
{
	cout << this->day << "." << this->month << "." << this->year << endl;
}

void Date::dayPlus()
{
	this->day++;
	if (this->day == 31) {
		this->month++;
		this->day = 1;
		if (this->month == 13) {
			this->year++;
			this->month = 1;
		}
	}
}

void Date::operator++()
{
	this->dayPlus();
}

void Date::operator--()
{
	this->day--;
	if (this->day == 0) {
		this->month--;
		this->day = 30;
		if (this->month == 0) {
			this->year--;
			this->month = 12;
		}
	}
}

bool Date::operator==(Date& date)
{
	if (this->day == date.day && this->month == date.month && this->year == date.year) {
		return true;
	}
	return false;
}

bool Date::operator!=(Date& date)
{
	if (this->day == date.day && this->month == date.month && this->year == date.year) {
		return false;
	}
	return true;
}

bool Date::operator>(Date& date)
{
	if (this->year > date.year) {
		return true;
	}
	if (this->month > date.month) {
		return true;
	}
	if (this->day > date.day) {
		return true;
	}
	return false;
}

bool Date::operator<(Date& date)
{
	if (this->year < date.year) {
		return true;
	}
	if (this->month < date.month) {
		return true;
	}
	if (this->day < date.day) {
		return true;
	}
	return false;
}

void Date::operator=(Date& date)
{
	this->day = date.day;
	this->month = date.month;
	this->year = date.year;
}

void Date::operator+=(Date& date)
{
	this->day += date.day;
	if (this->day > 30) {
		this->month++;
		if (this->month > 12) {
			this->year++;
			this->month -= 12;
		}
		this->day -= 30;
	}
	this->month += date.month;
	if (this->month > 12) {
		this->year++;
		this->month -= 12;
	}
	this->year += date.year;
}

void Date::operator-=(Date& date)
{
	this->day -= date.day;
	if (this->day < 1) {
		this->month--;
		if (this->month < 1) {
			this->year--;
			this->month += 12;
		}
		this->day += 30;
	}
	this->month -= date.month;
	if (this->month < 1) {
		this->year--;
		this->month += 12;
	}
	this->year -= date.year;
}

void Date::operator()()
{
	this->print();
}
