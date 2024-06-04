#include <iostream>
using namespace std;
int main()
{   
    int choise;
    cout << "enter number of shape ";
    cin >> choise;
    switch (choise) {
    case 1:
        int s1;
        cout << "enter size";
        cin >> s1;
        for (int i = 0; i < s1; i++) {
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            for (int j = 0; j < s1 - i; j++) {
                cout << "*";
            }
            cout << endl;
        }
        break;
    case 2:
        int s2;
        cout << "enter size ";
        cin >> s2;
        for (int i = 0; i < s2; i++) {
            for (int j = s2 - i; j <= s2; j++) {
                cout << "*";
            }
            cout << endl;
        }
        break;
    case 3:
        int s3;
        cout << "enter size ";
        cin >> s3;
        if (s3 % 2 == 0) {
            s3++;
        }
        for (int i = 0; i <= s3 / 2; i++) {
            for (int j = 0; j <= i; j++) {
                cout << " ";
            }
            for (int j = 0; j < s3 - (i * 2);j++) {
                cout << "*";
            }
            cout << endl;
        }
        break;
    case 4:
        int s4;
        cout << "enter size ";
        cin >> s4;
        for (int i = 0; i <= s4 / 2; i++) {
            for (int j = 0; j <= (s4/2)-i; j++) {
                cout << " ";
            }
            for (int j = 0; j < (i*2)+1;j++) {
                cout << "*";
            }
            cout << endl;
        }
        break;
    case 5:
        int s5;
        cout << "enter size ";
        cin >> s5;
        if (s5 % 2 == 0) {
            s5++;
        }
        for (int i = 0; i <= s5 / 2; i++) {
            for (int j = 0; j <= i; j++) {
                cout << " ";
            }
            for (int j = 0; j < s5 - (i * 2);j++) {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 0; i <= s5 / 2; i++) {
            for (int j = 0; j <= (s5 / 2) - i; j++) {
                cout << " ";
            }
            for (int j = 0; j < (i * 2) + 1;j++) {
                cout << "*";
            }
            cout << endl;
        }
    case 6:
        cout << "ne poluchilos";
        /*int s6;
        cout << "enter size ";
        cin >> s6;
        if (s6 % 2) {
            s6--;
        }
        for (int i = 0; i < s6/2; i++) {
            for (int j = 0; j < (1 + i);j++) {
                cout << "*";
            }
            for (int j = 0; j < (s6-2) - (i * 2); j++) {
                cout << " ";
            }
            for (int j = 0; j < (1 + i);j++) {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 0; i < s6 / 2-1; i++) {
            for (int j = 0; j < (s6 - i) / 2-1;j++) {
                cout << "*";
            }
            for (int j = 0; j < (s6-4) + (i * 2); j++) {
                cout << " ";
            }
            for (int j = 0; j < (s6 - i) / 2-1;j++) {
                cout << "*";
            }
            cout << endl;
        }
        break;*/
    case 7:
        int s7;
        cout << "enter size ";
        cin >> s7;
        if (s7 % 2 == 0) {
            s7++;
        }
        for (int i = 0; i < s7/2; i++) {
            for (int j=0;j < i + 1;j++) {
                cout << "*";
            }
            cout << endl;
        }
        for (int i=0; i < s7/2+1; i++) {
            cout << "*";
        }
        cout << endl;
        for(int i = 0; i < s7 / 2; i++) {
            for (int j=0;j < (s7/2-i);j++) {
                cout << "*";
            }
            cout << endl;
        }
        break;
    case 8:
        int s8;
        cout << "enter size ";
        cin >> s8;
        if (s8 % 2 == 0) {
            s8++;
        }
        for (int i = 0; i < s8 / 2; i++) {
            for (int j = 0;j < (s8 / 2 - i);j++) {
                cout << " ";
            }
            for (int j = 0;j < i + 1;j++) {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 0; i < s8 / 2 + 1; i++) {
            cout << "*";
        }
        cout << endl;
        for (int i = 0; i < s8 / 2; i++) {
            for (int j = 0;j < i + 1;j++) {
                cout << " ";
            }
            for (int j = 0; j < s8 / 2 - i;j++) {
                cout << "*";
            }
            cout << endl;
        }
    case 9:
        int s9;
        cout << "enter size ";
        cin >> s9;
        for (int i = 0; i < s9; i++) {
            for (int j = 0; j < s9 - i; j++) {
                cout << "*";
            }
            cout << endl;
        }
        break;
    case 10:
        int s10;
        cout << "enter size ";
        cin >> s10;
        for (int i = 0; i < s10; i++) {
            for (int j = i; j <= s10; j++) {
                cout << " ";
            }
            for (int j = s10 - i; j <= s10; j++) {
                cout << "*";
            }
            cout << endl;
        }
        break;
    default:
        cout << "unexpected number of shape";
    }
    

    // #9
    

    // #10
    

}

