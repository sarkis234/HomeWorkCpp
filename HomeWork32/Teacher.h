#pragma once
#include <iostream>
#include <vector>
using namespace std;
#include <string>
#include "Human.h"
#include "Group.h"

class Teacher : public Human
{
	vector<Group> groups;
public:
	Teacher(string fio, int age, string phone, string login, string password, vector<Group> groups);
	vector<Group> getGroups() { return this->groups; }
	void setGroups(vector<Group> groups) { this->groups = groups; }
	void addGroup(Group group) { this->groups.push_back(group); }
	void delGroup(int index) { this->groups.erase(this->groups.begin() + index); }
	void printTeacher();
};

