#include "Human.h"

Human::Human(string fio, int age, string phone, string login, string password)
{
	this->fio = fio;
	this->age = age;
	this->phone = phone;
	this->login = login;
	this->password = password;
}

void Human::printHuman()
{
	cout << "fio: " << this->fio << endl;
	cout << "Age: " << this->age << endl;
	cout << "Phone number: " << this->phone << endl;
	cout << "Login: " << this->login << endl;
	cout << "Password: " << this->password << endl;
}

Human::~Human()
{
}
