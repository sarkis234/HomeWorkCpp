#include "Sector.h"

Sector::Sector(string adress, Schedule* schedule, vector<Teacher*> teachers, vector<Group*> groups) : Academy(teachers, groups)
{
	this->adress = adress;
	this->schedule = schedule;
}

void Sector::printSector()
{
	cout << "Sector adress: " << this->adress;
	cout << "Sector schedule: " << endl;
	this->schedule->printSchedule();
	cout << "Sector groups: " << endl;
	for (int i = 0; i < this->groups.size(); i++) {
		this->groups[i]->printGroup();
	}
	cout << "Sector teachers: " << endl;
	for (int i = 0; i < this->teachers.size(); i++) {
		this->teachers[i]->printTeacher();
	}
}


