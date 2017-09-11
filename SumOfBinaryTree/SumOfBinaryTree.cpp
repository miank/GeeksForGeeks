// SumOfBinaryTree.cpp 

#include "stdafx.h"
#include <iostream>
#include <queue>
using namespace std;

struct Node
{
	int key;
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
	int Display();
};

void BinaryTree::Insert(int item)
{
	Node *newNode = new Node;
	Node *parent;
	newNode->key = item;
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
			if (item < ptr->key)
				ptr = ptr->left;
			else
				ptr = ptr->right;
		}
		if (item < parent->key)
			parent->left = newNode;
		else
			parent->right = newNode;
	}
}

int BinaryTree::Display()
{
	Node *temp = root;
	int total(0);
	if (root == nullptr)
	{
		/*cout << "Tree is empty " << endl;*/
		return 0;
	}

	queue<Node *> q;
	q.push(temp);

	while (!q.empty())
	{
		Node *current = q.front();
		q.pop();
		total += current->key;

		cout << current->key << endl;
		if (current->left != nullptr)
			q.push(current->left);
		if (current->right != nullptr)
			q.push(current->right);
	}
	return total;
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
	int sum = b.Display();
	cout << sum << endl;
    return 0;
}

