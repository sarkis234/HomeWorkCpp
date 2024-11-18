#pragma once
#include <iostream>
using namespace std;

class Flat
{
private:
	int size;
	int price;
public:
	Flat();
	Flat(int, int);
	Flat(Flat&);
	~Flat();
	int getSize();
	int getPrice();
	void setSize(int);
	void setPrice(int);
	void print();
	bool operator==(Flat&);
	void operator=(Flat&);
	bool operator>(Flat&);
};

