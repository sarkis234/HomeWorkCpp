#include "Lift.h"

Lift::Lift()
{
}

Lift::Lift(int minFloor, int maxFloor)
{
	this->maxFloor = maxFloor;
	this->minFloor = minFloor;
	this->currentFloor = minFloor;
}

int Lift::getMaxFloor()
{
	return this->maxFloor;
}

int Lift::getMinFloor()
{
	return this->minFloor;
}

bool Lift::getLiftPower()
{
	return this->liftPower;
}

int Lift::getCurrentFloor()
{
	return this->currentFloor;
}

void Lift::setMinFloor(int minFloor)
{
	this->minFloor = minFloor;
}

void Lift::setMaxFloor(int maxFloor)
{
	this->maxFloor = maxFloor;
}

void Lift::liftOn()
{
	this->liftPower = true;
}

void Lift::liftOff()
{
	this->liftPower = false;
}

void Lift::setCurrentFloor(int currentFloor) //вызов лифта
{
	if (this->liftPower) {
		this->currentFloor = currentFloor;
	}
	else {
		cout << "Lift is not working!";
	}
}

Lift::~Lift()
{
}
