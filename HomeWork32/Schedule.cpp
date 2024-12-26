#include "Schedule.h"

Schedule::Schedule(vector<Lesson*> lessons)
{
	this->lessons = lessons;
}

void Schedule::printSchedule()
{
	for (int i = 0; i < this->lessons.size(); i++) {
		this->lessons[i]->printLesson();
	}
}
