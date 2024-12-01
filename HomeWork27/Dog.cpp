
#include "Dog.h"

Dog::Dog(string name, string type, string breed) : Pet(name, type)
{
	this->breed = breed;
}

string Dog::getBreed()
{
	return this->breed;
}

void Dog::setBreed(string breed)
{
	this->breed = breed;
}

void Dog::print()
{
	cout << "Pet type: " << "dog" << endl;
	cout << "Dog name: " << this->name << endl;
	cout << "Dog breed: " << this->breed;
}

Dog::~Dog()
{
}
