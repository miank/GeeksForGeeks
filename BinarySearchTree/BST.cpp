#include "pch.h"
#include "BST.h"
#include <iostream>
using namespace std;

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

void BST::AddLeaf(int key)
{
	AddLeafPrivate(key, root);
}

// Adding a new node
void BST::AddLeafPrivate(int key, node *ptr)
{
	if (root == nullptr)
	{
		root = CreateKey(key);
	}
	else if (key < ptr->key)
	{
		if (ptr->left != nullptr)
		{
			AddLeafPrivate(key, ptr->left);
		}
		else
		{
			ptr->left = CreateKey(key);
		}
	}
	else if (key > ptr->key)
	{
		if (ptr->right != nullptr)
		{
			AddLeafPrivate(key, ptr->right);
		}
		else
		{
			ptr->right = CreateKey(key);
		}
	}
	else
	{
		cout << "The key " << key << "has already been added to the tree \n";
	}
}

