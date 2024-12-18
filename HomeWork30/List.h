#pragma once
#include <iostream>
using namespace std;
template <typename T>
struct Node {
	T value;
	Node* next;

	Node(T value) : value(value), next(nullptr) {}
};

template <typename T>
class List
{
private:
	Node<T>* first;
public:
	List() {
		this->first = nullptr;
	}
	List(T* arr, int size) {
		this->first = nullptr;
		for (int i = 0; i < size; i++) {
			pushBack(arr[i]);
		}
	}
	void pushBack(T value) {
		if (this->empty()) {
			this->first = new Node<T>(value);
			return;
		}
		Node<T>* p = this->first;
		while (p->next != nullptr) {
			p = p->next;
		}
		p->next = new Node<T>(value);
	}
	void pushStart(T value) {
		if (this->empty()) {
			this->first = new Node<T>(value);
			return;
		}
		Node<T>* p = this->first;
		this->first = new Node<T>(value);
		this->first->next = p;
	}
	void popBack() {
		if (this->empty()) {
			return;
		}
		Node<T>* p = this->first;
		while (p->next->next != nullptr) {
			p = p->next;
		}
		delete p->next;
		p->next = nullptr;
	}
	void popStart() {
		Node<T>* p = this->first->next;
		delete this->first;
		this->first = p;
	}
	Node<T>* search(T value) {
		Node<T>* p = this->first;
		while (p != nullptr) {
			if (p->value == value) {
				return p;
			}
			p = p->next;
		}
		return nullptr;
	}
	void print() {
		Node<T>* p = this->first;
		while (p != nullptr) {
			cout << p->value << " ";
			p = p->next;
		}
		cout << endl;
	}
	T operator[](int ind) {
		Node<T>* p = this->first;
		for (int i = 0; i < ind; i++) {
			p = p->next;
		}
		return p->value;
	}
	T* operator()() {
		Node<T>* p = this->first;
		int count = 0;
		T* arr = new T[getSize()];
		while (p != nullptr) {
			arr[count++] = p->value;
			p = p->next;
		}
		return arr;
	}
	int getSize() {
		Node<T>* p = this->first;
		int count = 0;
		while (p != nullptr) {
			p = p->next;
			count++;
		}
		return count;
	}
	bool empty() { return (first == nullptr) ? true : false; }
	void clearMemory() {
		Node<T>* p = this->first;
		Node<T>* prev = this->first;
		while (p != nullptr) {
			p = p->next;
			delete prev;
			prev = p;
		}
	}
	~List() {
		clearMemory();
	}
	Node<T>* getFirst() { return this->first; }
};
