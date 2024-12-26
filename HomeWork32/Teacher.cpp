#include "Teacher.h"

Teacher::Teacher(string fio, int age, string phone, string login, string password, vector<Group> groups) : Human(fio, age, phone, login, password)
{
	this->groups = groups;
}

void Teacher::printTeacher()
{
	cout << "Teacher ";
	this->printHuman();
	for (int i = 0; i < this->groups.size(); i++) {
		this->groups[i].printGroup();
	}
}
