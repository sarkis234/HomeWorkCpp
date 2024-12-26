#pragma once
#include <iostream>
using namespace std;
#include <string>
class Human
{
protected:
	string fio;
	int age;
	string phone;
	string login;
	string password;
public:
	Human(string fio, int age, string phone, string login, string password);
	string getFIO() { return this->fio; }
	int getAge() { return this->age; }
	string getPhone() { return this->phone; }
	string getLogin() { return this->login; }
	string getPassword() { return this->password; }
	void setFIO(string fio) { this->fio = fio; }
	void setAge(int age) { this->age = age; }
	void setPhone(string phone) { this->phone = phone; }
	void setLogin(string login) { this->login = login; }
	void setPassword(string password) { this->password = password; }
	void printHuman();
	~Human();
};

