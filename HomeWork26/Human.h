#pragma once
#include <iostream>
using namespace std;
#include <string>

class Human
{
private:
	string name;
	string surname;
	string fatherName;
public:
	Human();
	Human(string, string, string);
	Human(Human&);
	string getName();
	string getSurname();
	string getFatherName();
	void setName(string);
	void setSurname(string);
	void setFatherName(string);
	void print();
	~Human();
};

