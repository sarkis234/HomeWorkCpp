#include "MarkList.h"

MarkList::MarkList()
{

}

MarkList::MarkList(string subject, vector<int> marks, int examMark)
{
	this->subject = subject;
	this->marks = marks;
	this->examMark = examMark;
}

float MarkList::avg()
{
	float sum = 0;
	for (int i = 0; i < this->marks.size(); i++) {
		sum += this->marks[i];
	}
	return sum / this->marks.size();
}

void MarkList::printMarkList()
{
	cout << "Subject: " << this->subject << endl;
	for (int i = 0; i < this->marks.size(); i++) {
		cout << "Mark " << i << ": " << this->marks[i] << endl;
	}
	cout << "ExamMark: " << this->examMark << endl;
}

MarkList::~MarkList()
{
	
}
