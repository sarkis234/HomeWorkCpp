#include <iostream>
using namespace std;
#include "BinaryTree.h"

int main()
{
	int* arr = new int[5] { 2, 1, 8, 9, 10 };
	BinaryTree tree(arr, 5);
	tree.print(tree.getRoot());
	tree.insert(4, tree.getRoot());
	cout << endl;
	tree.print(tree.getRoot());
}
