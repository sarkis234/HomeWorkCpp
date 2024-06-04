#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	const int SIZE = 10;
	int array[SIZE];
	int mult = 10;
	for (int i = 0; i < SIZE; i++) {
		array[i] = 1 + rand() % 9999;
		cout << array[i] << " ";
	}
	cout << endl;
	for (int k = 1; k < 5; k++) {
		cout << k << " sorting" << endl;
		for (int j = 0, flag; j < SIZE - 1; j++) {
			flag = false;
			for (int i = 0; i < SIZE - 1 - j; i++) {
				if (array[i] % mult > array[i + 1] % mult){
					swap(array[i], array[i + 1]);
					flag = true;
				}
			}
			if (flag == false) {
				break;
			}
		}
		for (int i = 0; i < 10; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
		mult *= 10;
	}
	
}