// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "BST.h"
using namespace std;

int main()
{
	int Treekeys[16] = { 50, 76, 21, 4, 32, 64, 15, 52, 14, 100,
		                 83, 2, 3, 70, 87, 80};

	BST myTree;
	cout << "Printing the tree in order before adding numbers \n";
	myTree.PrintInOrder();
	cout << "Printing the tree in order after adding numbers \n";
	for (int i = 0; i < 16; i++)
	{
		myTree.AddLeaf(Treekeys[i]);
	}
	myTree.PrintInOrder();
	cout << endl;
	return 0;
}
