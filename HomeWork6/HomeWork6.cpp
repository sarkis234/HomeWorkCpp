#include <iostream>
using namespace std;
int main()
{
	// #1
	/*int n, max = 0;
	cout << "enter four numbers ";
	for (int i = 0; i < 4; i++) {
		cin >> n;
		if (n > max) {
			max = n;
		}
	cout << max;*/

	// #2
	/*int n, a, b, count = 0;
	cout << "enter diapason ";
	cin >> a >> b;
	cout << "enter number ";
	cin >> n;

	if (a > b) swap(a, b);
	for (int i = a; i <= b; i++) {
		cout << i << " ";
		count++;
		if (i == b) {
			i = a-1;
		}
		if (count == n) {
			i = b;
		}
	}*/

	// #3
	/*float max;
	cout << "enter max ";
	cin >> max;
	for (double i = 0.25; i < max; i += 0.25) {
		cout << i << endl;
	}*/

	// #4
	/*double n, sum = 0, count = 0;
	cout << "enter num ";
	cin >> n;
	while (n != 0) {
		sum += n;
		cout << "enter num ";
		cin >> n;
		count++;
	}
	cout << sum / count;*/

	// #5
	/*char sym;
	cout << "enter sym ";
	cin >> sym;
	if (int(sym) >= 65 && int(sym) <= 90 || int(sym) >= 97 && int(sym) <= 122) {
		cout << "yes";
	}
	else {
		cout << "no";
	}*/

	// #6(ne poluchilos)
	/*int a, b, a1, b1;
	cout << "enter diapason ";
	cin >> a >> b;
	cout << "enter second diapason ";
	cin >> a1 >> b1;
	if (a > b) swap(a, b);
	if (a1 > b1) swap(a1, b1);
	for (int i = a; i <= b; i++) {
		if (i < a1 || i > b1) {
			cout << i << endl;
		}
	}
	for (int j = a1; j <= b1; j++) {
		if (j < a || j > b) {
			cout << j << endl;
		}
	}*/

	// #7
	/*int n, a, b, count = 0;
	cout << "enter diapason ";
	cin >> a >> b;
	cout << "enter num ";
	cin >> n;
	if (a > b) swap(a, b);
	while (a <= b) {
		if (a % n == 0) {
			count++;
		}
		a++;
	}
	cout << count;
	}*/
