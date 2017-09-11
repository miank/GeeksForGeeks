// SumOfBinaryTree.cpp 

#include "stdafx.h"
#include <iostream>
#include <queue>
using namespace std;

struct Node
{
	int data;
	Node *left, *right;
};

class BinaryTree
{
	Node *root;
public:
	BinaryTree()
	{
		root = nullptr;
	}

	int IsEmpty()
	{
		return (root == nullptr);
	}

	void Insert(int data);
};

void BinaryTree::Insert(int item)
{
	Node *newNode = new Node;
	Node *parent;
	newNode->data = item;
	newNode->left = nullptr;
	newNode->right = nullptr;

	// first check if tree is empty
	if (IsEmpty())
	{
		root = newNode;
	}
	else
	{
		Node *ptr;
		// for traversal create a temp node
		ptr = root;
		
		while (ptr != nullptr)
		{
			parent = ptr;
			if (item < ptr->data)
				ptr = ptr->left;
			else
				ptr = ptr->right;
		}
		if (item < parent->data)
			parent->left = newNode;
		else
			parent->right = newNode;
	}
}

int main()
{
	BinaryTree b;
	b.Insert(52);
	b.Insert(25);
	b.Insert(50);
	b.Insert(15);
	b.Insert(40);
	b.Insert(45);
	b.Insert(20);
    return 0;
}

