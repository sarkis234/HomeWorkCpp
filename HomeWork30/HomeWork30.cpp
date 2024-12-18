#include <iostream>
using namespace std;
#include "Queue.h"

int main()
{
	int* arr = new int[5] {1, 2, 3, 4, 5};
	Queue<int> obj1(arr, 5);
	obj1.print();
	obj1.popStart();
	obj1.print();
	obj1.pushBack(9);
	obj1.print();
	obj1.popStart();
	obj1.print();
}
