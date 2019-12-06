#include <iostream>

using std::cout; using std::cin; using std::endl;

struct Node {
	int key;
	struct Node* left, * right;
};

struct Node* newNode(int item) {
	struct Node* temp = new Node;
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
};

