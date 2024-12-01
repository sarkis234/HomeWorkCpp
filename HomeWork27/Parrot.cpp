#include "Parrot.h"

Parrot::Parrot(string name, string type, int featherLong) : Pet(name, type)
{
	this->featherLong = featherLong;
}

int Parrot::getFeatherLong()
{
	return this->featherLong;
}

void Parrot::setFeatherLong(int featherLong)
{
	this->featherLong = featherLong;
}

void Parrot::print()
{
	cout << "Pet type: " << "parrot" << endl;
	cout << "Parrot name: " << this->name << endl;
	cout << "Parrot feather length: " << this->featherLong << " cm";
}

Parrot::~Parrot()
{
}
