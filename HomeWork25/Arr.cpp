#include "Arr.h"

template <typename T>
Arr<T>::Arr()
{
}

/*template <typename T>
Arr<T>::Arr(Arr& arr)
{
	this->arr = arr.arr;
	this->size = arr.size;
}*/

template <typename T>
int Arr<T>::getSize()
{
	return this->size;
}

template <typename T>
T* Arr<T>::getArr()
{
	return this->arr;
}

template <typename T>
int Arr<T>::getLength()
{
	return this->length;
}

template <typename T>
void Arr<T>::setSize(int size)
{
	this->size = size;
}

template <typename T>
void Arr<T>::setArr(T* arr)
{
	this->arr = arr;
}

template <typename T>
int Arr<T>::find(T elem)
{
	for (int i = 0; i < this->size; i++) {
		if (this->arr[i] == elem) {
			return i;
		}
	}
	return -1;
}

template <typename T>
void Arr<T>::pushBack(T newElem)
{
	int* buf = new int[this->size + 1];
	for (int i = 0; i < size; i++) {
		buf[i] = this->arr[i];
	}
	buf[size] = newElem;
	delete[] this->arr;
	this->arr = buf;
	this->size = size;
}

template <typename T>
void Arr<T>::insert(int ind, T elem)
{
	this->arr[ind] = elem;
}

template <typename T>
Arr<T> Arr<T>::operator+(Arr<T>& arr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] + arr.arr[i];
	}
	return Arr<T>{ this->size, newArr };
}

template <typename T>
Arr<T> Arr<T>::operator-(Arr<T>& arr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] - arr.arr[i];
	}
	return Arr<T>{ this->size, newArr };
}

template <typename T>
Arr<T> Arr<T>::operator*(Arr<T>& arr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] * arr.arr[i];
	}
	return Arr<T>{ this->size, newArr };
}

template <typename T>
Arr<T> Arr<T>::operator/(Arr<T>& arr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] / arr.arr[i];
	}
	return Arr<T>{ this->size, newArr };
}

template <typename T>
bool Arr<T>::operator==(Arr<T>& arr)
{
	if (this->size != arr.size) {
		return false;
	}
	for (int i = 0; i < size; i++) {
		if (this->arr[i] != arr.arr[i]) {
			return false;
		}
	}
	return true;
}

template <typename T>
bool Arr<T>::operator!=(Arr<T>& arr)
{
	if (this->size != arr.size) {
		return true;
	}
	for (int i = 0; i < size; i++) {
		if (this->arr[i] != arr.arr[i]) {
			return true;
		}
	}
	return false;
}

template <typename T>
bool Arr<T>::operator>(Arr<T>& arr)
{
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < this->size; i++) {
		sum1 += this->arr[i];
	}
	for (int i = 0; i < arr.size; i++) {
		sum2 += arr.arr[i];
	}
	if (sum1 > sum2) {
		return true;
	}
	return false;
}

template <typename T>
bool Arr<T>::operator<(Arr<T>& arr)
{
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < this->size; i++) {
		sum1 += this->arr[i];
	}
	for (int i = 0; i < arr.size; i++) {
		sum2 += arr.arr[i];
	}
	if (sum1 < sum2) {
		return true;
	}
	return false;
}

template <typename T>
bool Arr<T>::operator>=(Arr<T>& arr)
{
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < this->size; i++) {
		sum1 += this->arr[i];
	}
	for (int i = 0; i < arr.size; i++) {
		sum2 += arr.arr[i];
	}
	if (sum1 >= sum2) {
		return true;
	}
	return false;
}

template <typename T>
bool Arr<T>::operator<=(Arr<T>& arr)
{
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < this->size; i++) {
		sum1 += this->arr[i];
	}
	for (int i = 0; i < arr.size; i++) {
		sum2 += arr.arr[i];
	}
	if (sum1 <= sum2) {
		return true;
	}
	return false;
}

template <typename T>
Arr<T> Arr<T>::operator=(Arr<T> arr)
{
	delete[] this->arr;
	this->arr = arr.arr;
	this->size = arr.size;
	return *this;
}

template <typename T>
Arr<T> Arr<T>::operator+=(Arr<T>& arr)
{
	*this = (*this + arr);
	return *this;
}

template <typename T>
Arr<T> Arr<T>::operator-=(Arr<T>& arr)
{
	*this = (*this - arr);
	return *this;
}

template <typename T>
Arr<T> Arr<T>::operator*=(Arr<T>& arr)
{
	*this = (*this * arr);
	return *this;
}

template <typename T>
Arr<T> Arr<T>::operator/=(Arr<T>& arr)
{
	*this = (*this / arr);
	return *this;
}

template <typename T>
void Arr<T>::operator()()
{
	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < this->size - 1; j++) {
			if (this->arr[j] > this->arr[j + 1]) {
				int b = this->arr[j];
				this->arr[j] = this->arr[j + 1];
				this->arr[j + 1] = b;
			}
		}
	}
}

template <typename T>
int Arr<T>::operator[](int idx)
{
	return this->arr[idx];
}