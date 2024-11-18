#pragma once
#include <iostream>
using namespace std;

class Complex
{
private:
	int deistv;
	int mnim;
public:
	Complex();
	Complex(int, int);
	Complex(Complex&);
	~Complex();
	int getDeistv();
	int getMnim();
	void setDeistv(int);
	void setMnim(int);
	void printComplex();
	Complex operator+(Complex&);
	Complex operator-(Complex&);
	Complex operator*(Complex&);
	Complex operator/(Complex&);
};

