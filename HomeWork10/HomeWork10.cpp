#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	const int s = 5, s2 = 2, s3 = 8;
	int array[s][s];
	int array1[s3][s2];
	int array2[s][s]{};
	int c = 0;
	int c1 = 0;
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			array[i][j] = 10 + rand() % 90;
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < s3; i++) {
		cout << "enter coordinat(< 5) ";
		for (int j = 0; j < s2; j++) {
			cin >> array1[i][j];
		}
		
	}
	for (int i = 0; i < s3; i++) {
		for (int j = 0; j < s2; j++) {
			cout << array1[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < s3; i++) {
		array[array1[i][0]][array1[i][1]] = 0;
	}
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			if (array[i][j] != 0) {
				array2[c][c1++] = array[i][j];
				if (c1 == 5) {
					c1 = 0;
					c++;
				}
			}
		}
	}
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			cout << array2[i][j] << " ";
		}
		cout << endl;
	}
}

