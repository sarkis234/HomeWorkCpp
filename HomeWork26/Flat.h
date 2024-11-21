#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Human.h"

class Flat
{
private:
	Human* humans;
	int price;
	int roomsNum;
	int humanNum;
	int number;
public:
	static int id;
	Flat();
	Flat(Human*, int, int, int);
	Flat(Flat&);
	Human* getHumans();
	int getPrice();
	int getRoomsNum();
	int getHumanNum();
	void setHumans(Human*, int);
	void setPrice(int);
	void setRoomsNum(int);
	void setHumanNum(int);
	void addHuman(Human);
	void print();
	~Flat();
};

