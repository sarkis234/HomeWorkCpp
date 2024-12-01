#include "Cat.h"

Cat::Cat(string name, string type, int mustLength) : Pet(name, type)
{
	this->mustLength = mustLength;
}

int Cat::getMustLength()
{
	return this->mustLength;
}

void Cat::setMustLength(int mustLength)
{
	this->mustLength = mustLength;
}

void Cat::print()
{
	cout << "Pet type: " << "cat" << endl;
	cout << "Cat name: " << this->name << endl;
	cout << "Cat mustache length: " << this->mustLength;
}

Cat::~Cat()
{
}
