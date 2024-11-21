#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Flat.h"

class Home
{
private:
	Flat* flats;
	int floorNum;
	int flatsNum;
public:
	Home();
	Home(Flat*, int, int);
	Home(Home&);
	Flat* getFlats();
	int getFloorNum();
	int getFlatsNum();
	void setFlats(Flat*, int);
	void setFloorNum(int);
	void setFlatsNum(int);
	void addFlat(Flat);
	void print();
	~Home();
};

