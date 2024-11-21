#include "Flat.h"

Flat::Flat()
{
	this->humanNum = 2;
	this->roomsNum = 2;
	this->price = 1000;
	this->humans = new Human[humanNum];
	this->number = this->id++;
}

Flat::Flat(Human* humans, int price, int roomsNum, int humanNum)
{
	this->humans = new Human[humanNum];
	for (int i = 0; i < humanNum; i++) {
		this->humans[i] = humans[i];
	}
	this->humanNum = humanNum;
	this->roomsNum = roomsNum;
	this->price = price;
	this->number = this->id++;
}

Flat::Flat(Flat& flat)
{
	this->humans = new Human[flat.humanNum];
	for (int i = 0; i < flat.humanNum; i++) {
		this->humans[i] = flat.humans[i];
	}
	this->humanNum = flat.humanNum;
	this->roomsNum = flat.roomsNum;
	this->price = flat.price;
	this->number = this->id++;
}

Human* Flat::getHumans()
{
	return this->humans;
}

int Flat::getPrice()
{
	return this->price;
}

int Flat::getRoomsNum()
{
	return this->roomsNum;
}

int Flat::getHumanNum()
{
	return this->humanNum;
}

void Flat::setHumans(Human* humans, int humanNum)
{
	Human* buf = new Human[humanNum];
	for (int i = 0; i < humanNum; i++) {
		buf[i] = humans[i];
	}
	delete[] this->humans;
	this->humans = buf;
	this->humanNum = humanNum;
}

void Flat::setPrice(int price)
{
	this->price = price;
}

void Flat::setRoomsNum(int roomsNum)
{
	this->roomsNum = roomsNum;
}

void Flat::setHumanNum(int humanNum)
{
	Human* buf = new Human[humanNum];
	for (int i = 0; i < humanNum && i < this->humanNum; i++) {
		buf[i] = this->humans[i];
	}
	delete[] this->humans;
	this->humans = buf;
	this->humanNum = humanNum;
}

void Flat::addHuman(Human human)
{
	Human* buf = new Human[humanNum + 1];
	for (int i = 0; i < humanNum; i++) {
		buf[i] = this->humans[i];
	}
	buf[humanNum] = human;
	delete[] this->humans;
	this->humans = buf;
	this->humanNum++;
}

void Flat::print()
{
	cout << "Flat " << this->number << ":" << endl;
	cout << "Price: " << this->price << endl;
	cout << "Humans living: ";
	for (int i = 0; i < this->humanNum; i++) {
		cout << "Human " << i+1 << " ";
		this->humans[i].print();
		cout << endl;
	}
}

Flat::~Flat()
{
	delete[] this->humans;
}
