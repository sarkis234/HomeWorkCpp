#include <iostream>
using namespace std;

int main()
{
    char field[8][8];
    int coord1, coord2;
    cin >> coord1 >> coord2;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i % 2 == j % 2) {
                field[i][j] = 219;
            }
            else {
                field[i][j] = ' ';
            }
        }
    }
    cout << "  a b c d e f g h" << endl;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i == coord1 - 1 && j == coord2 - 1) {
                field[i][j] = '@';
            }
        }
    }
    if (coord1 >= 3 && coord2 >= 2) {
        field[coord1 - 3][coord2 - 2] = '*';
    }
    if (coord1 >= 3 && coord2 <= 7) {
        field[coord1 - 3][coord2] = '*';
    }
    if (coord1 <= 6 && coord2 <= 7) {
        field[coord1+1][coord2] = '*';
    }
    if (coord1 <= 6 && coord2 >= 2) {
        field[coord1 + 1][coord2-2] = '*';
    }
    if (coord1 >= 2 && coord2 >= 3) {
        field[coord1 - 2][coord2 - 3] = '*';
    }
    if (coord1 <= 7 && coord2 >= 3) {
        field[coord1][coord2-3] = '*';
    }
    if (coord1 <= 7 && coord2 <= 6) {
        field[coord1][coord2+1] = '*';
    }
    if (coord1 >= 2 && coord2 <= 6) {
        field[coord1-2][coord2+1] = '*';
    }

    for (int i = 0; i < 8; i++) {
        cout << i + 1 << " ";
        for (int j = 0; j < 8; j++) {
            cout << field[i][j] << field[i][j];
        }
        cout << endl;
    }
}
