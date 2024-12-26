#include "Academy.h"

Academy::Academy(vector<Teacher*> teachers, vector<Group*> groups)
{
	this->teachers = teachers;
	this->groups = groups;
}

void Academy::printAcademy()
{
	cout << "Academy groups: " << endl;
	for (int i = 0; i < this->groups.size(); i++) {
		this->groups[i]->printGroup();
	}
	cout << "Academy teachers: " << endl;
	for (int i = 0; i < this->teachers.size(); i++) {
		this->teachers[i]->printTeacher();
	}
}
