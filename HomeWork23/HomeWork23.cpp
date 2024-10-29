#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
	Fraction obj1(3, 8);
	Fraction obj2(4, 5);
	obj1.printFraction();
	cout << " ";
	obj2.printFraction();
	cout << endl;
	obj1.sumFraction(obj2);
	cout << endl;
	obj1.minusFraction(obj2);
	cout << endl;
	obj1.multFraction(obj2);
	cout << endl;
	obj1.divFraction(obj2);
}
