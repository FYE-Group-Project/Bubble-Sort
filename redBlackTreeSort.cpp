// Bubble sort Algorithm using Red Black Tree
// A red–black tree is a kind of self-balancing binary search tree
// Each node of the binary tree has an extra bit, and that bit is often interpreted as the color of the node
// These color bits are used to ensure the tree remains approximately balanced during insertions and deletions
// 11/20/19
// Seth Musselman, Avery Miller, Evan Oleary, Jeremy Martin, James Meyer, Tre' Moore

#include "headerSort.h"
#include <iostream>
#include <cstdlib>

int arr[] = { 5, 8, 22, 33, 1, 6, 54, 72, 89, 91, 25, 32, 42, 44, 3, 7, 17, 21, -1 };
int n = sizeof(arr) / sizeof(arr[0]);

int main() {
	cout << "The example numbers are: ";
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << endl;

	treeSort(arr, n);

	cout << "The example numbers sorted are: ";
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";

	return 0;
}