#include "Time.h"

Time::Time()
{
}

Time::Time(struct tm* time_start, struct tm* time_end)
{
	this->time_start = time_start;
	this->time_end = time_end;
}

Time::~Time()
{
}
