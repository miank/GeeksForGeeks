// SumOfLeafNodes.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *left = nullptr;
	Node *right = nullptr;
};

Node *createNode(int key)
{
	Node *temp = new Node;
	temp->data = key;
	temp->left = nullptr;
	temp->right = nullptr;
	return temp;
}

int sumLeaf(Node* root)
{
	// Code here
	if (root == nullptr)
		return 0;
	int sum(0);

	if (root->left == nullptr && root->right == nullptr)
		return root->data;
	int leftSum = sumLeaf(root->left);
	int rightSum = sumLeaf(root->right);
	return leftSum + rightSum;
}

int main()
{
	Node *root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	int sum = sumLeaf(root);
	cout << sum << endl;
}