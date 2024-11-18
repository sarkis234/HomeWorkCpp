#include "Complex.h"

Complex::Complex()
{
}

Complex::Complex(int deistv, int mnim)
{
	this->deistv = deistv;
	this->mnim = mnim;
}

Complex::Complex(Complex& complex)
{
	this->deistv = complex.deistv;
	this->mnim = complex.mnim;
}

Complex::~Complex()
{
}

int Complex::getDeistv()
{
	return this->deistv;
}

int Complex::getMnim()
{
	return this->mnim;
}

void Complex::setDeistv(int deistv)
{
	this->deistv = deistv;
}

void Complex::setMnim(int mnim)
{
	this->mnim = mnim;
}

void Complex::printComplex()
{
	cout << this->deistv << " + " << this->mnim << "*i" << endl;
}

Complex Complex::operator+(Complex& complex)
{
	Complex sum(this->deistv + complex.deistv, this->mnim + complex.mnim);
	return sum;
}

Complex Complex::operator-(Complex& complex)
{
	Complex minus(this->deistv - complex.deistv, this->mnim - complex.mnim);
	return minus;
}

Complex Complex::operator*(Complex& complex)
{
	Complex mult(this->deistv * complex.deistv, this->mnim * complex.mnim);
	return mult;
}

Complex Complex::operator/(Complex& complex)
{
	Complex div(this->deistv / complex.deistv, this->mnim / complex.mnim);
	return div;
}
