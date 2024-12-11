#include <iostream>
using namespace std;
#include "List.h";
template <typename T>
void operator<<(ostream& out, List<T>& list) {
	list.print();
}
int main()
{
	List<int> list;
	list.pushBack(4);
	list.pushBack(1);
	list.pushBack(2);
	list.pushBack(5);
	list.print();

	/*cout << list[1] << endl;
	int* arr = list();
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}*/
	cout << endl;
	list.pushIndex(3, 4);
	list.print();
	list.sort();
	list.print();
	cout << list;
}
