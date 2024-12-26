#pragma once
#include <iostream>
using namespace std;

class Time
{
	struct tm* time_start;
	struct tm* time_end;
public:
	Time();
	Time(struct tm*, struct tm*);
	tm* getStart() { return this->time_start; }
	tm* getEnd() { return this->time_end; }
	void setStart(tm* time_start) { this->time_start = time_start; }
	void setEnd(tm* time_end) { this->time_end = time_end; }
	~Time();
};

