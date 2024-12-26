#pragma once
#include <iostream>
#include <vector>
using namespace std;
#include <string>

class MarkList
{
	string subject;
	vector<int> marks;
	int examMark;
public:
	MarkList();
	MarkList(string, vector<int>, int);
	string getSubject() { return this->subject; }
	vector<int> getMarks() { return this->marks; }
	int getExamMark() { return this->examMark; }
	void setSubject(string subject) { this->subject = subject; }
	void setMarks(vector<int> marks) { this->marks = marks; }
	void setExamMark(int examMark) { this->examMark = examMark; }
	void addMark(int addedMark) { this->marks.push_back(addedMark); }
	void delMark(int index){ this->marks.erase(this->marks.begin() + 2); }
	float avg();
	void printMarkList();
	~MarkList();
};

