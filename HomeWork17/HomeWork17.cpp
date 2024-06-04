#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));
    int s1 = 4, s2 = 3;
    int** array = new int*[s1];
    for (int i = 0; i < s1; i++) {
        array[i] = new int[s2];
        for (int j = 0; j < s2; j++) {
            array[i][j] = 1 + rand() % 9;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // add column

    int** buf = new int*[s1];
    for (int i = 0; i < s1; i++) {
        buf[i] = array[i];
        buf[i][s2] = 1 + rand() % 9;
    }
    delete[] array;
    array = buf;
    for (int i = 0; i < s1; i++) {
        for (int j = 0; j < s2+1; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // del stroke

    /*int** buf = new int* [s1 - 1];
    for (int i = 0; i < s1 - 1;i++) {
        buf[i] = array[i];
    }
    delete[] array;
    array = buf;
    for (int i = 0; i < s1-1; i++) {
        for (int j = 0; j < s2; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;*/

    // del column

    /*int** buf = new int* [s1];
    for (int i = 0; i < s1; i++) {
        buf[i] = new int[s2 - 1];
        for (int j = 0; j < s2 - 1; j++) {
            buf[i][j] = array[i][j];
        }
    }
    delete[] array;
    array = buf;
    for (int i = 0; i < s1; i++) {
        for (int j = 0; j < s2-1; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;*/
}
