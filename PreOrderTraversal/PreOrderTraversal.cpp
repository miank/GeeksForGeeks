// PreorderTraversal.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *left;
	Node *right;
};

void preorder(Node* root)
{
	// Your code here
	if (root != nullptr)
	{
		preorder(root->left);
		cout << root->data << " ";
		preorder(root->right);

	}
}

int main()
{
	return 0;
}


