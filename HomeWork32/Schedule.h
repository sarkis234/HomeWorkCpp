#pragma once
#include <iostream>
#include <vector>
using namespace std;
#include "Lesson.h"

class Schedule
{
	vector<Lesson*> lessons;
public:
	Schedule(vector<Lesson*> lessons);
	vector<Lesson*> getLessons() { return this->lessons; }
	void setLessons(vector<Lesson*> lessons) { this->lessons = lessons; }
	void addLesson(Lesson* lesson) { this->lessons.push_back(lesson); }
	void delLesson(int index) { this->lessons.erase(this->lessons.begin() + index); }
	void printSchedule();
};

