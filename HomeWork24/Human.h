#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "Date.h"

class Human
{
private:
	int id;
	string name;
	string surname;
	string fatherName;
	Date date;
	int count = 0;
public:
	Human();
	Human(int, string, string, string, Date);
	Human(Human&);
	int getId();
	string getName();
	string getSurname();
	string getFatherName();
	Date getDate();
	void setId(int);
	void setName(string);
	void setSurname(string);
	void setFatherName(string);
	void setDate(Date);
	void countHumans();
	void printHuman();
	~Human();
};

