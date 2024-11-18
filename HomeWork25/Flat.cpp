#include "Flat.h"

Flat::Flat()
{
}

Flat::Flat(int size, int price)
{
	this->size = size;
	this->price = price;
}

Flat::Flat(Flat& flat)
{
	this->size = flat.size;
	this->price = flat.price;
}

Flat::~Flat()
{
}

int Flat::getSize()
{
	return this->size;
}

int Flat::getPrice()
{
	return this->price;
}

void Flat::setSize(int size)
{
	this->size = size;
}

void Flat::setPrice(int price)
{
	this->price = price;
}

void Flat::print()
{
	cout << "Size: " << this->size << endl;
	cout << "Price: " << this->price << "$" << endl;
}

bool Flat::operator==(Flat& flat)
{
	if (this->size == flat.size) {
		return true;
	}
	return false;
}

void Flat::operator=(Flat& flat)
{
	this->price = flat.price;
	this->size = flat.size;
}

bool Flat::operator>(Flat& flat)
{
	if (this->price > flat.price) {
		return true;
	}
	return false;
}