#include <iostream>
using namespace std;

int main()
{
    // #1
    /*int array[5]{};
    int array2[5]{ 1, 2, 3, 4, 5 };
    int* arr = array;
    int* arr2 = array2;
    for (int i = 0; i < 5; i++) {
        *(arr + i) = *(arr2 + i);
    }
    for (int i = 0; i < 5; i++) {
        cout << *(arr2 + i) << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(arr + i) << " ";
    }*/

    // #2
    /*int array[5]{ 1, 2, 3, 4, 5 };
    int* arr = array;
    for (int i = 0; i < 5; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    for (int i = 5; i > 0; i--) {
        cout << *(arr + i - 1) << " ";
    }*/

    // #3
    int array[5]{};
    int array2[5]{ 1, 2, 3, 4, 5 };
    int* arr = array;
    int* arr2 = array2;
    for (int i = 5, c = 0; i > 0; i--, c++) {
        *(arr + c) = *(arr2 + i - 1);
    }
    for (int i = 0; i < 5; i++) {
        cout << *(arr2 + i) << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(arr + i) << " ";
    }
}
