// InorderTraversal.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *left;
	Node *right;
};

void inOrder(Node* root)
{
	// Your code here
	if (root != nullptr)
	{
		inOrder(root->left);
		cout << root->data << " ";
		inOrder(root->right);

	}
}

int main()
{
    return 0;
}

