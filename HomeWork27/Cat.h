#pragma once
#include <iostream>
using namespace std;
#include "Pet.h"

class Cat : public Pet
{
private:
	int mustLength;
public:
	Cat(string, string, int);
	int getMustLength();
	void setMustLength(int);
	void print();
	~Cat();
};

