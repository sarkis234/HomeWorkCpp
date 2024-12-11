#pragma once
#include <iostream>
using namespace std;

struct Node {
	int value;
	Node* right;
	Node* left;

	Node(int value) : value(value), left(nullptr), right(nullptr) {}
};

class BinaryTree
{
private:
	Node* root;
	void clearMemory(Node* root);
public:
	BinaryTree(int* arr, int size);
	void insert(int value, Node* root);
	void remove(int value, Node* root);
	void print(Node* root);
	Node* find(int value, Node* root);
	Node* getRoot() { return this->root; }
	~BinaryTree();
};

