#include "Home.h"

Home::Home()
{
	this->flatsNum = 10;
	this->floorNum = 1;
	this->flats = new Flat[this->flatsNum];
}

Home::Home(Flat* flats, int floorNum, int flatsNum)
{
	this->flats = new Flat[flatsNum];
	for (int i = 0; i < flatsNum; i++) {
		this->flats[i] = flats[i];
	}
	this->flatsNum = flatsNum;
	this->floorNum = floorNum;
}

Home::Home(Home& home)
{
	this->flats = new Flat[home.flatsNum];
	for (int i = 0; i < home.flatsNum; i++) {
		this->flats[i] = home.flats[i];
	}
	this->flatsNum = home.flatsNum;
	this->floorNum = home.floorNum;
}

Flat* Home::getFlats()
{
	return this->flats;
}

int Home::getFloorNum()
{
	return this->floorNum;
}

int Home::getFlatsNum()
{
	return this->flatsNum;
}

void Home::setFlats(Flat* flats, int flatsNum)
{
	Flat* buf = new Flat[flatsNum];
	for (int i = 0; i < flatsNum; i++) {
		buf[i] = flats[i];
	}
	delete[] this->flats;
	this->flats = buf;
	this->flatsNum = flatsNum;
}

void Home::setFloorNum(int floorNum)
{
	this->floorNum = floorNum;
}

void Home::setFlatsNum(int flatsNum)
{
	Flat* buf = new Flat[flatsNum];
	for (int i = 0; i < flatsNum && i < this->flatsNum; i++) {
		buf[i] = this->flats[i];
	}
	delete[] this->flats;
	this->flats = buf;
	this->flatsNum = flatsNum;
}

void Home::addFlat(Flat flat)
{
	Flat* buf = new Flat[flatsNum + 1];
	for (int i = 0; i < flatsNum; i++) {
		buf[i] = this->flats[i];
	}
	buf[flatsNum] = flat;
	delete[] this->flats;
	this->flats = buf;
	this->flatsNum++;
}

void Home::print()
{
	cout << "Flats num: " << this->flatsNum << endl;
	cout << "Floors num: " << this->floorNum << endl;
}

Home::~Home()
{
	delete[] this->flats;
}
