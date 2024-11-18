#include "Overcoat.h"

Overcoat::Overcoat()
{
}

Overcoat::Overcoat(int price, int type)
{
	this->price = price;
	this->type = type;
}

Overcoat::Overcoat(Overcoat& overcoat)
{
	this->price = overcoat.price;
	this->type = overcoat.type;
}

Overcoat::~Overcoat()
{
}

int Overcoat::getPrice()
{
	return this->price;
}

int Overcoat::getType()
{
	return this->type;
}

void Overcoat::setPrice(int price)
{
	this->price = price;
}

void Overcoat::setType(int type)
{
	this->type = type;
}

void Overcoat::print()
{
	cout << "Type: " << this->type << endl;
	cout << "Price: " << this->price << "$" << endl;
}

bool Overcoat::operator==(Overcoat& overcoat)
{
	if (this->type == overcoat.type) {
		return true;
	}
	return false;
}

void Overcoat::operator=(Overcoat& overcoat)
{
	this->price = overcoat.price;
	this->type = overcoat.type;
}

bool Overcoat::operator>(Overcoat& overcoat)
{
	if (this->price > overcoat.price) {
		return true;
	}
	return false;
}