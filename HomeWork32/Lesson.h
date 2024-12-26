#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Group.h"
#include "Teacher.h"
#include "Time.h"

class Lesson
{
	Group* group;
	Teacher* teacher;
	string subject;
	Time time;

public:
	Lesson(Group* group, Teacher* teacher, string subject, Time time);
	Group* getGroup() { return this->group; }
	Teacher* getTeacher() { return this->teacher; }
	string getString() { return this->subject; }
	Time getTime() { return this->time; }
	void setGroup(Group* group) { this->group = group; }
	void setTeacher(Teacher* teacher) { this->teacher = teacher; }
	void setSubject(string subject) { this->subject = subject; }
	void setTime(Time time) { this->time = time; }
	void printLesson();
};

