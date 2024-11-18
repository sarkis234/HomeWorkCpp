#pragma once
#include <iostream>
using namespace std;

class Overcoat
{
private:
	int price;
	int type;
public:
	Overcoat();
	Overcoat(int, int);
	Overcoat(Overcoat&);
	~Overcoat();
	int getPrice();
	int getType();
	void setPrice(int);
	void setType(int);
	void print();
	bool operator==(Overcoat&);
	void operator=(Overcoat&);
	bool operator>(Overcoat&);
};