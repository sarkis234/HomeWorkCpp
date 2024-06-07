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
void addStr(int**& arr) {
    int s1 = _msize(arr) / sizeof(arr[0]);
    int s2 = _msize(arr[0]) / sizeof(arr[0][0]);
    int** buf = new int* [s1 + 1];
    int* array = new int[s2]; // new string
    for (int i = 0; i < s2; i++) {
        array[i] = 10 + rand() % 90;
    }
    buf[0] = array;
    for (int i = 1; i < s1 + 1; i++) {
        buf[i] = arr[i-1];
    }
    delete[] arr;
    arr = buf;
}
void addCol(int**& arr) {
    int s1 = _msize(arr) / sizeof(arr[0]);
    int s2 = _msize(arr[0]) / sizeof(arr[0][0]);
    int** buf = new int*[s1];
    int* array = new int[s1]; // new column
    for (int i = 0; i < s1; i++) {
        array[i] = 10 + rand() % 90;
    }
    for (int i = 0; i < s1; i++) {
        buf[i] = new int[s2 + 1];
        buf[i][0] = array[i];
        for (int j = 1; j < s2 + 1; j++) {
            buf[i][j] = arr[i][j - 1];
        }
    }
    for (int i = 0; i < s1; i++) {
        delete[] arr[i];
    }
    delete[]arr;
    arr = buf;
}
void delStr(int**& arr) {
    int s1 = _msize(arr) / sizeof(arr[0]);
    int** buf = new int* [s1 - 1];
    for (int i = 1; i < s1;i++) {
        buf[i - 1] = arr[i];
    }
    delete[]arr[0];
    delete arr;
    arr = buf;
}
void delCol(int**& arr) {
    int s1 = _msize(arr) / sizeof(arr[0]);
    int s2 = _msize(arr[0]) / sizeof(arr[0][0]);
    int** buf = new int* [s1];
    for (int i = 0; i < s1; i++) {
        buf[i] = new int[s2 - 1];
        for (int j = 1; j < s2; j++) {
            buf[i][j - 1] = arr[i][j];
        }
    }
    for (int i = 0; i < s1; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    arr = buf;
}
int main()
{
    srand(time(NULL));
    int** arr = new int* [7];
    for (int i = 0; i < 7; i++) {
        arr[i] = new int[8];
        for (int j = 0; j < 8; j++) {
            arr[i][j] = 10 + rand() % 90;
        }
    }
    showArr(arr);
    addStr(arr);
    cout << endl;
    showArr(arr);
    addCol(arr);
    cout << endl;
    showArr(arr);
    delStr(arr);
    cout << endl;
    showArr(arr);
    cout << endl;
    delCol(arr);
    showArr(arr);
}
