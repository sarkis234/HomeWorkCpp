#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Teacher.h"
#include "Group.h"

class Academy
{
protected:
	vector<Teacher*> teachers;
	vector<Group*> groups;
public:
	Academy(vector<Teacher*> teachers, vector<Group*> groups);
	vector<Teacher*> getTeachers() { return this->teachers; }
	vector<Group*> getGroups() { return this->groups; }
	void setTeachers(vector<Teacher*> teachers) { this->teachers = teachers; }
	void setGroups(vector<Group*> groups) { this->groups = groups; }
	void addTeacher(Teacher* teacher) { this->teachers.push_back(teacher); }
	void delTeacher(int index) { this->teachers.erase(this->teachers.begin() + index); }
	void addGroup(Group* group) { this->groups.push_back(group); }
	void delGroup(int index) { this->groups.erase(this->groups.begin() + index); }
	void printAcademy();
 };

