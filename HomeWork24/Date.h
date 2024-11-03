#pragma once
#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
	int dateDay;
	int dateMonth;
	int dateYear;
public:
	Date();
	Date(int, int, int);
	int getDay();
	int getMonth();
	int getYear();
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	~Date();
};

