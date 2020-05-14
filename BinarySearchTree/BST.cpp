#include "pch.h"
#include "BST.h"

// Constructor to set the root value to nullptr
BST::BST()
{
	root = nullptr;
}

// Function to create a new node with value
BST::node* BST::CreateKey(int data)
{
	node *newNode = nullptr;
	newNode = new node;
	newNode->key = data;
	newNode->left = nullptr;
	newNode->right = nullptr;
	return newNode;
}

