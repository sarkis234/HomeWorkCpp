#pragma once
#include <iostream>
using namespace std;
#include "Pet.h"

class Dog : public Pet
{
private:
	string breed;
public:
	Dog(string, string, string);
	string getBreed();
	void setBreed(string);
	void print();
	~Dog();

};

