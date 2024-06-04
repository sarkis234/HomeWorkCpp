#include <iostream>
using namespace std;

void showArray(int* array) {
	int size = _msize(array) / sizeof(array[0]);
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

void delRep(int*& array, int* array2) {
	int size1 = _msize(array) / sizeof(array[0]);
	int size2 = _msize(array2) / sizeof(array2[0]);
	int c = 0;
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (array[i] == array2[j]) {
				c++;
				break;
			}
		}
	}
	int* buf = new int[size1 - c];
	int s = 0;
	for (int i = 0; i < size1; i++) {
		int flag = false;
		for (int j = 0; j < size2; j++) {
			if (array[i] == array2[j]) {
				flag = true;
				break;
			}
		}
		if (flag == false) {
			buf[s++] = array[i];
		}
	}
	delete[] array;
	array = buf;
}
int main()
{
	int* array = new int[12] { 2, 6, 8, 4, 4, 4, 8, 9, 6, 0, 7, 1 };
	int* array2 = new int[6] { 3, 4, 1, 2, 4, 5 };
	showArray(array);
	showArray(array2);
	delRep(array, array2);
	showArray(array);
}