#include <iostream>
using namespace std;

int main()
{   
    srand(time(NULL));
    // #1
    /*
    int min = 0, max = 10;
    const int s = 10;
    int array[s];
    int maxVal = min;
    int minVal = max;
    for (int i = 0;i < s;i++) {
        array[i] = rand() % max + 1;;
        cout << array[i] << " ";
        if (array[i] > maxVal) {
            maxVal = array[i];
        }
        if (array[i] < minVal) {
            minVal = array[i];
        }
    }
    cout << endl << "max: " << maxVal << endl;
    cout << "min: " << minVal << endl;*/

    // #2
    /*int min, max, val, sum = 0;
    const int s = 10;
    int array[s];
    cout << "enter min ";
    cin >> min;
    cout << "enter max ";
    cin >> max;
    cout << "enter value ";
    cin >> val;
    for (int i = 0;i < s;i++) {
        array[i] = min + rand() % (max + 1 - min);
        cout << array[i] << " ";
        if (array[i] < val) {
            sum += array[i];
        }
    }
    cout << endl << sum;*/

    // #3
    /*const int s = 12;
    int array[s];
    int min, max;
    for (int i = 0; i < s;i++) {
        cout << "enter salary for " << i+1 << " month ";
        cin >> array[i];
    }
    cout << "enter min ";
    cin >> min;
    cout << "enter max ";
    cin >> max;
    int minSal = array[min-1], maxSal = array[min-1];
    for (int i = min-1;i < max;i++) {
        if (array[i] > maxSal) {
            maxSal = array[i];
        }
        if (array[i] < minSal) {
            minSal = array[i];
        }
    }
    cout << "max: " << maxSal << endl;
    cout << "min: " << minSal << endl;*/

    // #4
    /*const int n = 10;
    int min = -10, max = 10;
    int array[n];
    int minVal = max, maxVal = min;
    int indMin = 0, indMax = 0, sum = 0, sum2 = 0, mult = 1, mult2 = 1;
    int first, last;
    for (int i = 0;i < n;i++) {
        array[i] = min + rand() % (max + 1 - min);
        cout << array[i] << " ";
        if (array[i] > maxVal) {
            maxVal = array[i];
            indMax = i;
        }
        if (array[i] < minVal) {
            minVal = array[i];
            indMin = i;
        }
        if (array[i] < 0) {
            sum += array[i];
        }
    }
    if (indMin > indMax) swap(indMin, indMax);
    for (int i = indMin+1; i < indMax; i++) {
        mult *= array[i];
    }
    for (int i = 0; i < n; i += 2) {
        mult2 *= array[i];
    }
    for (int i = 0; i < n; i++) {
        if (array[i] < 0) {
            first = i;
            break;
        }
    }
    for (int i = n-1; i > 0;i--) {
        if (array[i] < 0) {
            last = i;
            break;
        }
    }
    for (int i = first + 1;i < last; i++) {
        sum2 += array[i];
    }
    cout << endl << "sum1 = " << sum << endl;
    cout << "mult1 = " << mult << endl;
    cout << "mult2 = " << mult2 << endl;
    cout << "sum2 = " << sum2 << endl;*/
}
