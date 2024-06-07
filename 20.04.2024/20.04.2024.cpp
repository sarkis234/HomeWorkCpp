#include <iostream>
using namespace std;

void showArr(int**& arr) {
    int s1 = _msize(arr) / sizeof(arr[0]);
    int s2 = _msize(arr[0]) / sizeof(arr[0][0]);
    for (int i = 0; i < s1; i++) {
        for (int j = 0; j < s2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void addCol(int**& arr, int*& arr2) {
    int s1 = _msize(arr) / sizeof(arr[0]);
    int s2 = _msize(arr[0]) / sizeof(arr[0][0]);
    int** buf = new int* [s1];
    for (int i = 0; i < s1; i++) {
        buf[i] = new int[s2 + 1];
        for (int j = 0; j < s2; j++) {
            buf[i][j] = arr[i][j];
        }
        buf[i][s2] = arr2[i];
    }
    for (int i = 0; i < s1; i++) {
        delete[] arr[i];
    }
    delete[]arr;
    arr = buf;
}
int main()
{
    srand(time(NULL));
    int** arr = new int* [5];
    for (int i = 0; i < 5; i++) {
        arr[i] = new int[4];
        for (int j = 0; j < 4; j++) {
            arr[i][j] = 10 + rand() % 90;
        }
    }
    showArr(arr);
    cout << "+" << endl;
    int* arr2 = new int[5];
    for (int i = 0; i < 5; i++) {
        arr2[i] = 10 + rand() % 90;
        cout << arr2[i] << " ";
    }
    cout << endl << "=" << endl;
    addCol(arr, arr2);
    showArr(arr);
}
