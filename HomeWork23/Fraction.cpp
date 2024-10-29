#include "Fraction.h"
Fraction::Fraction(int num, int denom)
{
	this->num = num;
	this->denom = denom;
}

Fraction::~Fraction()
{

}

int Fraction::getNum()
{
	return this->num;
}

int Fraction::getDenom()
{
	return this->denom;
}

void Fraction::setNum(int num)
{
	this->num = num;
}

void Fraction::setDenom(int denom)
{
	this->denom = denom;
}

void Fraction::printFraction()
{
	std::cout << this->getNum() << "/" << this->getDenom();
}

void Fraction::sumFraction(Fraction obj2)
{
	int sumNum, sumDenom;
	if (this->denom == obj2.denom) {
		sumNum = this->num + obj2.num;
		sumDenom = obj2.denom;
	}
	else {
		sumNum = (this->num * obj2.denom) + (obj2.num * this->denom);
		sumDenom = this->denom * obj2.denom;
	}
	this->printFraction();
	std::cout << " + ";
	obj2.printFraction();
	std::cout << " = " << sumNum << "/" << sumDenom;
}

void Fraction::minusFraction(Fraction obj2)
{
	int minusNum, minusDenom;
	if (this->denom == obj2.denom) {
		minusNum = this->num - obj2.num;
		minusDenom = obj2.denom;
	}
	else {
		minusNum = (this->num * obj2.denom) - (obj2.num * this->denom);
		minusDenom = this->denom * obj2.denom;
	}
	this->printFraction();
	std::cout << " - ";
	obj2.printFraction();
	std::cout << " = " << minusNum << "/" << minusDenom;
}

void Fraction::multFraction(Fraction obj2)
{
	int multNum = this->num * obj2.num;
	int multDenom = this->denom * obj2.denom;
	this->printFraction();
	std::cout << " * ";
	obj2.printFraction();
	std::cout << " = " << multNum << "/" << multDenom;
}

void Fraction::divFraction(Fraction obj2)
{
	int divNum = this->num * obj2.denom;
	int divDenom = this->denom * obj2.num;
	this->printFraction();
	std::cout << " / ";
	obj2.printFraction();
	std::cout << " = " << divNum << "/" << divDenom;
}
