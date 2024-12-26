#pragma once
#include <iostream>
#include <vector>
using namespace std;
#include <string>
#include "Human.h"
#include "MarkList.h"

class Student : public Human
{
	vector<MarkList*> markLists;
public:
	Student(string fio, int age, string phone, string login, string password, vector<MarkList*> markLists);
	vector<MarkList*> getMarkLists() { return this->markLists; }
	void setMarkLists(vector<MarkList*> markLists) { this->markLists = markLists; }
	void addMarkList(MarkList* markList) { this->markLists.push_back(markList); }
	void delMarkList(int index) { this->markLists.erase(this->markLists.begin() + index); }
	void printStudent();
};

