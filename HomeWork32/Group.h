#pragma once
#include <iostream>
#include <vector>
using namespace std;
#include <string>
#include "Student.h"

class Group
{
	vector<Student*> students;
	string name;
	string faculty;
public:
	Group(vector<Student*> students, string name, string faculty);
	vector<Student*> getStudents() { return this->students; }
	string getName() { return this->name; }
	string getFaculty() { return this->faculty; }
	void setStudents(vector<Student*> students) { this->students = students; }
	void setName(string name) { this->name = name; }
	void setFaculty(string faculty) { this->faculty = faculty; }
	void addStudent(Student* student) { this->students.push_back(student); }
	void delStudent(int index) { this->students.erase(this->students.begin() + index); }
	void printGroup();
};

