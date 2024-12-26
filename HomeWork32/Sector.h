#pragma once
#include <iostream>
#include <vector>
using namespace std;
#include "Academy.h"
#include "Schedule.h"

class Sector : public Academy
{
	string adress;
	Schedule* schedule;
public:
	Sector(string adress, Schedule* schedule, vector<Teacher*> teachers, vector<Group*> groups);
	string getAdress() { return this->adress; }
	Schedule* getSchedule() { return this->schedule; }
	void setAdress(string adress) { this->adress = adress; }
	void setSchedule(Schedule* schedule) { this->schedule = schedule; }
	void printSector();
};

