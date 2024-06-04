#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	// #unique
	/*const int s = 10;
	int array[s];
	int array1[s];
	int array2[20];
	int min = 0, max = 10;
	int c = 0;
	for (int i = 0; i < s; i++) {
		array[i] = min + rand() % (max + 1 - min);
		cout << array[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < s; i++) {
		array1[i] = min + rand() % (max + 1 - min);
		cout << array1[i] << " ";
	}
	for (int i = 0, flag; i < s; i++) {
		flag = true;
		for (int j = 0; j < s; j++) {
			if (array[i] == array1[j]) {
				flag = false;
				break;
			}
		}
		if (flag == true) {
	 		for (int j = 0; j < i; j++) {
				if (array[j] == array[i]) {
					flag = false;
					break;
				}
			}
			if (flag == true) {
				for (int j = i + 1; j < s; j++) {
					if (array[j] == array[i]) {
						flag = false;
						break;
					}
				}
				if (flag == true) {
					array2[c++] = array[i];
				}
			}
		}
	}
	for (int i = 0, flag; i < s; i++) {
		flag = true;
		for (int j = 0; j < s; j++) {
			if (array1[i] == array[j]) {
				flag = false;
				break;
			}
		}
		if (flag == true) {
			for (int j = 0; j < i; j++) {
				if (array1[j] == array1[i]) {
					flag = false;
					break;
				}
			}
			if (flag == true) {
				for (int j = i + 1; j < s; j++) {
					if (array1[j] == array1[i]) {
						flag = false;
						break;
					}
				}
				if (flag == true) {
					array2[c++] = array1[i];
				}
			}
		}
	}
	cout << endl;
	for (int i = 0; i < c; i++) {
		cout << array2[i] << " ";
	}*/

	// #common
	/*const int s = 10;
	int array[s];
	int array1[s];
	int array2[s];
	int min = 0, max = 10;
	int c = 0;
	for (int i = 0; i < s; i++) {
		array[i] = min + rand() % (max + 1 - min);
		cout << array[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < s; i++) {
		array1[i] = min + rand() % (max + 1 - min);
		cout << array1[i] << " ";
	}
	cout << endl;
	for (int i = 0, flag; i < s; i++) {
		flag = false;
		for (int j = 0; j < s;j++) {
			if (array[i] == array1[j]) {
				flag = true;
				break;
			}
		}
		if (flag == true) {
			for (int j = 0; j < i;j++) {
				if (array[i] == array[j]) {
					flag = false;
					break;
				}
			}
			if (flag == true) {
				for (int j = 0; j < s;j++) {
					for (int k = 0; k < i; k++) {
						if (array1[j] == array1[k]) {
							flag = false;
							break;
						}
					}
					if (flag == false) {
						break;
					}
				}
				if (flag == false) {
					for (int j = 0;j < s;j++) {
						for (int k = 0; k < s;k++) {
							if (array1[j] == array1[k] && array1[j] == array[i]) {
								flag = true;
							}
						}
					}
				}
				if (flag == true) {
					array2[c++] = array[i];
				}
			}
		}
	}
	for (int i = 0; i < c;i++) {
		cout << array2[i] << " ";
	}*/
}