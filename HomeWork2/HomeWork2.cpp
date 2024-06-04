#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	/* 1 - Пользователь вводит с клавиатуры целое шестизначное число. Определить, является ли введенное число — счастливым(Счастливым считается шестизначное число, у которого сумма 
	первых 3 цифр равна сумме вторых трех цифр).Если пользователь ввел не шестизначноечисло — сообщить об ошибке.*/
	/*int n;
	cout << "Введите шестизначное число: ";
	cin >> n;
	if (n < 100000 or n >=1000000) {
		cout << "Вы ввели не шестизначное число";
	}
	else {
		int n1 = n / 100000;
		int n2 = n / 10000 % 10;
		int n3 = n / 1000 % 10;
		int n4 = n / 100 % 10;
		int n5 = n / 10 % 10;
		int n6 = n % 10;
		if (n1 + n2 + n3 == n4 + n5 + n6) {
			cout << "число счастливое";
		}
		else {
			cout << "число несчастливое";
		}
	}*/
	/* 2 - Пользователь вводит четырехзначное число. Необходимо поменять в этом числе 1 и 2 цифры, а также 3 и 4 цифры. Если пользователь вводит не четырехзначное число — вывести
	сообщение об ошибке.*/
	/*int n;
	cout << "Введите четырехзначное число: ";
	cin >> n;
	if (n >= 10000) {
		cout << "Вы ввели не четырехзначное число";
	}
	else {
		int n1 = n / 1000 * 100;
		int n2 = n / 100 % 10 * 1000;
		int n3 = n / 10 % 10;
		int n4 = n % 10 * 10;
		cout << n1 + n2 + n3 + n4;
	}*/
	/* 3 - Пользователь вводит с клавиатуры 7 целых чисел. Определить максимальное из этих 7 чисел.*/
	/*int n1 = 0;
	int n2;
	int n3;
	int n4;
	int n5;
	int n6;
	int n7;
	int maxim = 0;
	cout << "Введите семь чисел: ";
	cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7;
	if (maxim < n1) {
		maxim = n1;
	}
	if (maxim < n2) {
		maxim = n2;
	}
	if (maxim < n3) {
		maxim = n3;
	}
	if (maxim < n4) {
		maxim = n4;
	}
	if (maxim < n5) {
		maxim = n5;
	}
	if (maxim < n6) {
		maxim = n6;
	}
	if (maxim < n7) {
		maxim = n7;
	}
	cout << maxim << " максимальное число";*/
	/* 4 - Рассчет маршрута*/
	int weight = 0;
	double dist_start = 0;
	double dist_end = 0;
	cout << "Введите вес груза: ";
	cin >> weight;
	cout << "Введите расстояние от A до B: ";
	cin >> dist_start;
	cout << "Введите расстояние от B до C: ";
	cin >> dist_end;
	if (weight <= 500) {
		double capacity = 300 - dist_start;
		if (capacity < dist_end) {
			cout << "Вам нужно заправиться на " << dist_end - capacity << " литров";
		}
		if (capacity >= dist_end) {
			cout << "Вам не нужно заправляться";
		}
		if (dist_start > 300 or dist_end > 300) {
			cout << "Самолет не долетит по такому маршруту";
		}
	}
	else if (weight <= 1000 and weight > 500) {
		double capacity = 300 - (dist_start * 4);
		if (capacity < dist_end * 4) {
			cout << "Вам нужно заправиться на " << (dist_end*4) - capacity << " литров";
		}
		if (capacity >= dist_end * 4) {
			cout << "Вам не нужно заправляться";
		}
		if (dist_start > 75 or dist_end > 75) {
			cout << "Самолет не долетит по такому маршруту";
		}
	}
	else if (weight <= 1500 and weight > 1000) {
		double capacity = 300 - (dist_start * 7);
		if (capacity < dist_end * 7) {
			cout << "Вам нужно заправиться на " << (dist_end * 7) - capacity << " литров";
		}
		if (capacity >= dist_end * 7) {
			cout << "Вам не нужно заправляться";
		}
		if (dist_start > 43 or dist_end > 43) {
			cout << "Самолет не долетит по такому маршруту";
		}
	}
	else if (weight <= 2000 and weight > 1500) {
		double capacity = 300 - (dist_start * 9);
		if (capacity < dist_end * 9) {
			cout << "Вам нужно заправиться на " << (dist_end * 9) - capacity << " литров";
		}
		if (capacity >= dist_end * 9) {
			cout << "Вам не нужно заправляться";
		}
		if (dist_start > 33.3 or dist_end > 33.3) {
			cout << "Самолет не долетит по такому маршруту";
		}
	}
	else {
		cout << "Самолет не поднимет такой вес";
	}
}
