#include <iostream>
using namespace std;
int main()
{
	// #1
	/*char sim;
	cout << "Enter any symbol: ";
	cin >> sim;
	int num_sim = int(sim);
	if (num_sim >= 48 && num_sim <= 57) {
		cout << "num";
	}
	else if (num_sim >= 65 && num_sim <= 90 || num_sim >= 97 && num_sim <= 122) {
		cout << "letter";
	}
	else {
		switch (num_sim) {
		case 46:
		case 44:
		case 63:
		case 33:
		case 58:
		case 59:
		case 45:
		case 40:
		case 41:
			cout << "punctuation mark";
			break;
		default:
			cout << "other";
		}
	}*/

	// #2
	/*int mob_oper;
	int time;
	cout << "enter your operator(1 - Beline, 2 - Megaphon, 3 - Tele2) ";
	cin >> mob_oper;
	cout << "enter time of call (in minutes) ";
	cin >> time;
	switch (mob_oper) {
	case 1:
		cout << "one minute on this operator cost 2$" << endl << "price of call: " << time * 2 << "$";
		break;
	case 2:
		cout << "one minute on this operator cost 2.5$" << endl << "price of call: " << time * 2.5 << "$";
		break;
	case 3:
		cout << "one minute on this operator cost 3$" << endl << "price of call: " << time * 3 << "$";
		break;
	default:
		cout << "you entered unknown operator";
	}*/

	// #3
	//int num_task;
	//int salary;
	//int strokes;
	//int late;
	//cout << "enter what you want to count(1 - strokes of code, 2 - times of late, 3 - money) ";
	//cin >> num_task;
	//switch (num_task) {
	//case 1:
	//	cout << "enter wishful salary ";
	//	cin >> salary;
	//	cout << "enter times of late ";
	//	cin >> late;
	//	cout << "you need to write " << (salary + (late / 3 * 20)) / 50 * 100 << " strokes of code";
	//	break;
	//case 2:
	//	cout << "enter strokes of code ";
	//	cin >> strokes;
	//	cout << "enter wishful salary ";
	//	cin >> salary;
	//	if (strokes / 100 * 50 < salary) {
	//		cout << "you can't earn your wishful salary";
	//		break;
	//	}
	//	else {
	//		cout << "you can late " << ((strokes / 100 * 50 - salary) / 20 * 3) + 2 /*+2 потому что за первые два опоздания нет штрафа*/ << " times";
	//		break;
	//	}
	//case 3:
	//	cout << "enter strokes of code ";
	//	cin >> strokes;
	//	cout << "enter times of late ";
	//	cin >> late;
	//	if ((strokes / 100 * 50) <= (late / 3 * 20)) {
	//		cout << "you won't earn any money";
	//		break;
	//	}
	//	else {
	//		cout << "you will earn " << (strokes / 100 * 50) - (late / 3 * 20) << "$";
	//		break;
	//	}
	//default:
	//	cout << "you entered an unknown task to count";
	//}
}
