#include "Human.h"

Human::Human()
{
	this->name = "Ivan";
	this->surname = "Ivanov";
	this->fatherName = "Ivanovich";
}

Human::Human(string name, string surname, string fatherName)
{
	this->name = name;
	this->surname = surname;
	this->fatherName = fatherName;
}

Human::Human(Human& human)
{
	this->name = human.name;
	this->surname = human.surname;
	this->fatherName = human.fatherName;
}

string Human::getName()
{
	return this->name;
}

string Human::getSurname()
{
	return this->surname;
}

string Human::getFatherName()
{
	return this->fatherName;
}

void Human::setName(string name)
{
	this->name = name;
}

void Human::setSurname(string surname)
{
	this->surname = surname;
}

void Human::setFatherName(string fatherName)
{
	this->fatherName = fatherName;
}

void Human::print()
{
	cout << "FIO: " << this->surname << this->name << this->fatherName;
}

Human::~Human()
{
}
