#pragma once
#include "List.h"
using namespace std;

template <typename T>
class Queue
{
private:
	List<T> arr;
public:
	Queue(T* arr, int size) : arr(arr, size) {

	}
	Queue(Queue<T>& queue) {
		this->arr = queue.arr;
	}
	void pushBack(T value) { this->arr.pushBack(value); }
	void popStart() { 
		Node<T>* p = this->arr.getFirst();
		this->arr.pushBack(p->value);
		this->arr.popStart(); 
	}
	T top() {
		Node<T>* p = this->arr.getFirst();
		while (p->next != nullptr) {
			p = p->next;
		}
		return p->value;
	}
	void print() {
		this->arr.print();
	}
	~Queue() {
	}
};