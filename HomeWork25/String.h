
#pragma once
#include <iostream>
using namespace std;

class String
{
private:
	char* str;
	int length;
	int size;
public:
	String();
	String(int);
	String(char*, int);
	String(const String&);
	int getSize();
	int getLength();
	const char* getStr();
	char* gets(char* str);
	void setStr();
	void operator=(String&);
	int operator()(char);
	char operator[](int);
	~String();
};