// CountLeavesInBinaryTree.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *left, *right;
};

Node* CreateNode(int ele)
{
	Node *temp = new Node;
	temp->data = ele;
	temp->left = temp->right = nullptr;
	return temp;
}

int countLeaves(Node *root)
{
	if (root == nullptr)
		return 0;
	if (root->left == nullptr && root->right == nullptr)
		return 1;
	int cnt = countLeaves(root->left) + countLeaves(root->right);
	return cnt;
}


int main()
{
	Node *root = CreateNode(1);
	root->left = CreateNode(2);
	root->right = CreateNode(3);
	root->left->right = CreateNode(4);
	root->left->left = CreateNode(5);
	int totalLeaves = countLeaves(root);
	cout << totalLeaves << endl;
    return 0;
}

