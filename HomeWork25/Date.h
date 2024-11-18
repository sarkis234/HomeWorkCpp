#pragma once
#include <iostream>
using namespace std;

class Date
{
	friend void operator>>(istream& in, Date& a);
	friend void operator<<(ostream& out, Date& a);
private:
	int day;
	int month;
	int year;
public:
	Date();
	Date(int, int, int);
	Date(Date&);
	~Date();
	int getDay();
	int getMonth();
	int getYear();
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	void print();
	void dayPlus();
	void operator++();
	void operator--();
	bool operator==(Date&);
	bool operator!=(Date&);
	bool operator>(Date&);
	bool operator<(Date&);
	void operator=(Date&);
	void operator+=(Date&);
	void operator-=(Date&);
	void operator()();
};

