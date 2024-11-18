
#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Arr
{
	friend void operator>>(istream& in, Arr& a);
	friend void operator<<(ostream& out, Arr& a);
private:
	int size;
	int length;
	T* arr;
public:
	Arr();
	Arr(int, int*);
	//Arr(Arr&);
	int getSize();
	T* getArr();
	int getLength();
	void print();
	void setSize(int);
	void setArr(T*);
	int find(T);
	void pushBack(T);
	void insert(int, T);
	void remove(int);
	void reverse();
	Arr<T> operator+(Arr<T>&);
	Arr<T> operator-(Arr<T>&);
	Arr<T> operator*(Arr<T>&);
	Arr<T> operator/(Arr<T>&);
	bool operator==(Arr<T>&);
	bool operator!=(Arr<T>&);
	bool operator>(Arr<T>&);
	bool operator<(Arr<T>&);
	bool operator>=(Arr<T>&);
	bool operator<=(Arr<T>&);
	Arr<T> operator=(Arr<T>);
	Arr<T> operator+=(Arr<T>&);
	Arr<T> operator-=(Arr<T>&);
	Arr<T> operator*=(Arr<T>&);
	Arr<T> operator/=(Arr<T>&);
	void operator()();
	int operator[](int);
	~Arr();
};

template <typename T>
inline  void Arr<T>::remove(int ind) {
	if (ind > this->size) {
		ind = this->size - 1;
	}
	int* buf = new int[this->size - 1];
	for (int i = 0; i < ind; i++) {
		buf[i] = this->arr[i];
	}
	for (int i = ind + 1; i < this->size; i++) {
		buf[i - 1] = this->arr[i];
	}
	this->size -= 1;
	delete[] this->arr;
	this->arr = buf;
}

template <typename T>
inline void Arr<T>::reverse()
{
	for (int i = 0; i < size / 2; i++) {
		swap(this->arr[i], this->arr[size - i - 1]);
	}
}

template <typename T>
inline Arr<T>::Arr(int size, int* arr)
{
	this->arr = arr;
	this->size = size;
}

template <typename T>
inline Arr<T>::~Arr()
{
}

template <typename T>
inline void Arr<T>::print()
{
	for (int i = 0; i < this->size; i++) {
		cout << this->arr[i] << " ";
	}
	cout << endl;
}