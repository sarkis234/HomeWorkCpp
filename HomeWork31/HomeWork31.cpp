#include <iostream>
#include "nsArr.h"
int main()
{
	int* arr;
	int size = 5;
	arr = nsArr::memory(size);
	try
	{
		nsArr::fill(arr, size);
	}
	catch (const char* ex)
	{
		std::cout << "not a num" << std::endl;
	}
	nsArr::print(arr, size);
	nsArr::sort(arr, size);
	nsArr::print(arr, size);
	try {
		nsArr::sum(arr, size, arr, size);
	}
	catch (const char* ex) {
		std::cout << "not equal" << std::endl;
	}
	nsArr::mult(arr, size, 2);
	nsArr::print(arr, size);
}