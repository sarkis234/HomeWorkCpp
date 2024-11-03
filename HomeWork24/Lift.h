#pragma once
#include <iostream>
#include <string>
using namespace std;

class Lift
{
private:
	int maxFloor;
	int minFloor;
	bool liftPower = false;
	int currentFloor;
public:
	Lift();
	Lift(int, int);
	int getMaxFloor();
	int getMinFloor();
	bool getLiftPower();
	int getCurrentFloor();
	void setMinFloor(int);
	void setMaxFloor(int);
	void liftOn();
	void liftOff();
	void setCurrentFloor(int); //вызов лифта
	~Lift();
};

