// PostorderTraversal.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *left;
	Node *right;
};

void postOrder(Node* root)
{
	// Your code here
	if (root != nullptr)
	{
		postOrder(root->left);
		postOrder(root->right);
		cout << root->data << " ";
	}
}


int main()
{
    return 0;
}

