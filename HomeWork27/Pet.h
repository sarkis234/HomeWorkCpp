#pragma once
#include <iostream>
using namespace std;
#include <string>

class Pet
{
protected:
	string name;
	string type;
public:
	Pet(string, string);
	string getName();
	string getType();
	void setName(string);
	void setType(string);
	void print();
	~Pet();
};

