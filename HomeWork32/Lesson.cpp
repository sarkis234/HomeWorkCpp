#include "Lesson.h"

Lesson::Lesson(Group* group, Teacher* teacher, string subject, Time time)
{
	this->group = group;
	this->teacher = teacher;
	this->subject = subject;
	this->time = time;
}

void Lesson::printLesson()
{
	cout << "Lesson subject: " << this->subject << endl;
	this->teacher->printTeacher();
	this->group->printGroup();
}
