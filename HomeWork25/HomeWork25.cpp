#include <iostream>
#include "Fraction.h"
#include "Complex.h"
#include "Overcoat.h"
#include "Flat.h"
#include "String.h"
#include "Date.h"
using namespace std;
void operator>>(istream& in, Date& a) {
	in >> a.day;
	if (a.day > 30) a.day = 30;
	in >> a.month;
	if (a.month > 12) a.month = 12;
	in >> a.year;
}
void operator<<(ostream& out, Date& a) {
	cout << a.day << "." << a.month << "." << a.year << endl;
}
int main()
{
	// #1
	/*Fraction obj1(3, 8);
	Fraction obj2(4, 5);
	obj1.printFraction();
	cout << " ";
	obj2.printFraction();
	cout << endl;
	obj1 + obj2;
	cout << endl;
	obj1 - obj2;
	cout << endl;
	obj1 * obj2;
	cout << endl;
	obj1 / obj2;
	cout << endl;*/

	// #2
	/*Complex obj3(1, 4);
	Complex obj4(2, 5);
	obj3.printComplex();
	obj4.printComplex();
	(obj3 + obj4).printComplex();
	(obj3 - obj4).printComplex();
	(obj3 * obj4).printComplex();
	(obj3 / obj4).printComplex();*/

	// #3
	/*Overcoat obj1(1000, 1);
	Overcoat obj2(250, 1);
	Overcoat obj3(100, 4);
	cout << (obj3 > obj1);*/

	// #4
	/*Flat obj1(1000, 10000);
	Flat obj2(250, 7500);
	Flat obj3(100, 3000);
	obj3 = obj1;
	obj3.print();*/

	// #5 добавил не проверял
	// #6 он и так есть

	// #7 не проверял должно работать

	// #8
	/*Date date1(30, 12, 2026);
	Date date2(30, 12, 2025);
	date1.print();
	++date1;
	date1.print();
	--date1;
	date1.print();
	cout << (date1 == date2) << endl;
	cout << (date1 != date2) << endl;
	cout << (date1 > date2) << endl;
	cout << (date1 < date2) << endl;
	cin >> date2;
	cout << date2;
	date2 = date1;
	cout << date2;
	date1 += date2;
	cout << date1;
	date1 -= date2;
	date1();*/
}