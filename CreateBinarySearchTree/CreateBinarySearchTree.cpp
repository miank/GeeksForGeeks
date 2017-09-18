// CreateBinarySearchTree.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *left, *right;
};

// creating a node
Node* CreateNode(Node *root, int ele)
{
	Node *temp = new Node;
	temp->data = ele;
	temp->left = temp->right = nullptr;
	return temp;
}

// inserting the node in BST
Node* insert(Node *node, int key)
{
	if (node == nullptr)
	{
		Node *newNode = CreateNode(node, key);
		return newNode;
	}

	// Otherwise move down in tree
	if (key < node->data)
		node->left = insert(node->left, key);
	if (key > node->data)
		node->right = insert(node->right, key);
	return node;
}

// function to display tree inorder 

void inorder(Node *root)
{
	if (root != nullptr)
	{
		inorder(root->left);
		cout << root->data << endl;
		inorder(root->right);
	}
}

int main()
{
	struct Node *root = NULL;
	root = insert(root, 50);
	insert(root, 30);
	insert(root, 20);
	insert(root, 40);
	insert(root, 70);
	insert(root, 60);
	insert(root, 80);

	// print inoder traversal of the BST
	inorder(root);
    return 0;
}

