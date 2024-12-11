#include "BinaryTree.h"

void BinaryTree::clearMemory(Node* root)
{
	if (root == nullptr) {
		return;
	}
	clearMemory(root->left);
	clearMemory(root->right);
	delete root;
}

BinaryTree::BinaryTree(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		insert(arr[i], this->root);
	}
}

void BinaryTree::insert(int value, Node* node)
{
	if (this->root == nullptr) {
		this->root = new Node(value);
	}
	if (node == nullptr) {
		return;
	}
	else {
		if (value > node->value) {
			if (node->right == nullptr) {
				node->right = new Node(value);
			}
			else {
				insert(value, node->right);
			}
		}
		else {
			if (node->left == nullptr) {
				node->left = new Node(value);
			}
			else {
				insert(value, node->left);
			}
		}
	}

}

void BinaryTree::remove(int value, Node* root)
{
	if (root == nullptr) {
		return;
	}
	remove(value, root->left);
	if (root->value == value) {

	}
	remove(value, root->right);
	// я без понятия как это делать
}

void BinaryTree::print(Node* root)
{
	if (root == nullptr) {
		return;
	}
	print(root->left);
	cout << root->value << " ";
	print(root->right);

}

Node* BinaryTree::find(int value, Node* root)
{
	if (root == nullptr) {
		return nullptr;
	}
	find(value, root->left);
	if (root->value == value) {
		return root;
	}
	find(value, root->right);
}

BinaryTree::~BinaryTree()
{
	clearMemory(this->root);
}
