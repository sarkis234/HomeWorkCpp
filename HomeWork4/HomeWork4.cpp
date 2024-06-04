#include <iostream>
using namespace std;

int main()
{
	// #1
	/*int min = 100, count= 0;
	while (min <= 999) {
		int n1 = min / 100;
		int n2 = min / 10 % 10;
		int n3 = min % 10;
		if (n1 == n2 && n1 == n3) {
			min++;
			continue;
		}
		else if (n1 == n2 || n1 == n3 || n2 == n3) {
			min++;
			count++;
		}
		else {
			min++;
		}
	}
	cout << count << " numbers";*/

	// #2
	/*int min = 100, count = 0;
	while (min <= 999) {
		int n1 = min / 100;
		int n2 = min / 10 % 10;
		int n3 = min % 10;
		if (n1 == n2 || n1 == n3 || n2 == n3) {
			min++;
		}
		else {
			min++;
			count++;
		}
	}
	cout << count << " numbers";*/

	// #3
	/*int num, digit, mult = 1, num2 = 0;
	cout << "enter num ";
	cin >> num;
	while (num > 0) {
		digit = num % 10;
		if (digit == 3 || digit == 6) {
			num = num / 10;
		}
		else {
			num2 = num2 + (digit * mult);
			mult *= 10;
			num = num / 10;
		}
	}
	cout << num2;*/

	// #4
	/*int a, b = 1;
	cout << "enter num ";
	cin >> a;
	while (a > b) {
		if (a % (b * b) == 0 && a % (b * b * b) != 0) {
			cout << b << endl;
		}
		b++;
	}*/

	// #5
	/*int a, sum = 0, sqr;
	cout << "enter num ";
	cin >> a;
	sqr = a * a;
	while (a < 0) {
		sum += (a % 10);
		a = a / 10;
	}
	if (sum * sum * sum == sqr) {
		cout << "equal";
	}
	else {
		cout << "not equal";
	}*/

	// #6
	/*int num, del=1;
	cout << "enter num ";
	cin >> num;
	while (num >= del) {
		if (num % del == 0) {
			cout << del << endl;
		}
		del++;
	}*/

	// #7
	int num1,num2, del = 1;
	cout << "enter num ";
	cin >> num1 >> num2;
	if (num1 > num2) swap(num1, num2);
	while (num1 >= del) {
		if (num1 % del == 0 && num2 % del == 0) {
			cout << del << endl;
		}
		del++;
	}
}
