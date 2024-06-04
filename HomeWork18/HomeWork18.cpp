#include <iostream>
using namespace std;
// 1
void delElem(char str[], int n) {
    for (int i = n; str[i] != '\0'; i++) {
        str[i] = str[i + 1];
    }
    for (int i = 0; str[i] != '\0'; i++) {
        cout << str[i];
    }
}
// 2
void delElems(char str[], char elem) {
    int k = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == elem) {
            k++;
        }
        if (str[i + k] == elem) {
            k++;
        }
        str[i] = str[i+k];
    }
    for (int i = 0; str[i]!= '\0'; i++) {
        cout << str[i];
    }
}
// 3 (ne poluchilos)
//void addElem(char str[], char elem, int n, int s) {
//    
//
//}

// 4
void replElem(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.') {
            str[i] = '!';
        }
    }
    for (int i = 0; str[i] != '\0'; i++) {
        cout << str[i];
    }
}
// 5
void countElem(char str[], char elem) {
    int c = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == elem) c++;
    }
    cout << c;
}
// 6
void countElemTypes(char str[]) {
    int num = 0, let = 0, other = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 48 && str[i] <= 57) {
            num++;
        }
        else if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) {
            let++;
        }
        else {
            other++;
        }
    }
    cout << "num: " << num;
    cout << endl << "let: " << let;
    cout << endl << "other: " << other;
}
int main()
{
    char str[] = { "ab...cdefg4336h.ggfgfgg.." };
    for (int i = 0; str[i] != '\0'; i++) {
        cout << str[i];
    }
    cout << endl;
    delElem(str, 5);
    cout << endl;
    delElems(str, 'f');
    cout << endl;
    replElem(str);
    cout << endl;
    countElem(str, '!');
    cout << endl;
    countElemTypes(str);
}
