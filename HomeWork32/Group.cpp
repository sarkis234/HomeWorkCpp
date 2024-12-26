#include "Group.h"

Group::Group(vector<Student*> students, string name, string faculty)
{
	this->students = students;
	this->name = name;
	this->faculty = faculty;
}

void Group::printGroup()
{
	cout << "Group name: " << this->name << endl;
	cout << "Faculty: " << this->faculty << endl;
	for (int i = 0; i < this->students.size(); i++) {
		this->students[i]->printStudent();
	}
}
