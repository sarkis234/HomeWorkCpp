#include "nsArr.h"

int* nsArr::memory(int size)
{
    int* arr = new int[size];
    return arr;
}

void nsArr::fill(int* arr, int size)
{
    std::cout << "enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
        if (std::cin.fail()) {
            throw "not a num";
        }
    }
}

void nsArr::fillAuto(int* arr, int size, int min = 1, int max = 10)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = min + rand() % (max- min + 1);
    }
}

void nsArr::print(int* arr, int size)
{
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void nsArr::sort(int* arr, int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void nsArr::sum(int* arr, int size, int* arr2, int size2)
{
    if (size != size2) {
        throw "not equal";
    }
    for (int i = 0; i < size; i++) {
        arr[i] += arr2[i];
    }
}

void nsArr::mult(int* arr, int size, int num)
{
    for (int i = 0; i < size; i++) {
        arr[i] *= num;
    }
}

