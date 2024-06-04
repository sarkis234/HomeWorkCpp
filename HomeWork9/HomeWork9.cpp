#include <iostream>
using namespace std;

int main()
{
    const int s1 = 3, s2 = 4;
    int n;
    cout << "enter num ";
    cin >> n;
    int array[s1][s2];
    // #1
    /*for (int i = 0; i < s1; i++) {
        for (int j = 0; j < s2; j++, n *= 2) {
            array[i][j] = n;
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }*/

    // #2
    /*for (int i = 0; i < s1; i++) {
        for (int j = 0; j < s2; j++, n++) {
            array[i][j] = n;
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }*/

}
