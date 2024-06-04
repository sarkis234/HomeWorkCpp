#include <iostream>
using namespace std;
void showDegree(int base, int index) {
	cout << pow(base, index) << endl;
}
void showSum(int a, int b) {
	int sum = 0;
	for (int i = a; i <= b;i++) {
		sum += i;
	}
	cout << sum << endl;
}
void showSov(int a2, int b2) {
	for (int i = a2; i < b2;i++) {
		int sum2 = 0;
		for (int n = 1; n < i; n++) {
			if (i % n == 0) {
				sum2 += n;
			}
		}
		if (sum2 == i) {
			cout << i << " ";
		}
	}
	cout << endl;
}
void showCard(int num, int suitNum) {
	if (num > 10) {
		cout << " unexpected num of card" << endl;
	}
	else {
		char suit;
		switch (suitNum) {
		case 1:
			suit = '♠';
			break;
		case 2:
			suit = '♥';
			break;
		case 3:
			suit = '♦';
			break;
		case 4:
			suit = '♣';
			break;
		default:
			cout << "unexpected suit" << endl;
		}
		for (int i = 0; i < 13; i++) {
			cout << "_";
		}
		cout << endl << "|" << suit << "\t    |" << endl;
		for (int i = 0; i < 6; i++) {
			cout << "|           |" << endl;
		}
		cout << "|     " << num << "     |" << endl;
		for (int i = 0; i < 5; i++) {
			cout << "|           |" << endl;
		}
		cout << "|\t   " << suit << "|" << endl;
		for (int i = 0; i < 13; i++) {
			cout << "_";
		}
		cout << endl;
	}
}
void showCard(char num, int suitNum) {
	char suit;
	switch (suitNum) {
	case 1:
		suit = '♠';
		break;
	case 2:
		suit = '♥';
		break;
	case 3:
		suit = '♦';
		break;
	case 4:
		suit = '♣';
		break;
	default:
		cout << "unexpected suit";
	}
	for (int i = 0; i < 13; i++) {
		cout << "_";
	}
	cout << endl << "|" << suit << "\t    |" << endl;
	for (int i = 0; i < 6; i++) {
		cout << "|           |" << endl;
	}
	cout << "|     " << num << "     |" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "|           |" << endl;
	}
	cout << "|\t   " << suit << "|" << endl;
	for (int i = 0; i < 13; i++) {
		cout << "_";
	}
	cout << endl;
}
void showLucky(int num) {
	if (num >= 1000000 || num <= 99999) {
		cout << "unexpected num" << endl;
	}
	else {
		if ((num % 10) + (num % 100 / 10) + (num % 1000 / 100) == (num / 100000) + (num / 10000 % 10) + (num / 1000 % 10)) {
			cout << num << " is lucky";
		}
		else {
			cout << num << " is not lucky";
		}
	}
}
int main()
{
	showDegree(5, 3);
	showSum(3, 7);
	showSov(1, 100);
	showCard(8, 3);
	showCard('A', 3);
	showLucky(363552);
}
