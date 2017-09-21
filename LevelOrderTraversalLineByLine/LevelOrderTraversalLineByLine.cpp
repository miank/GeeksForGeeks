// LevelOrderTraversalLineByLine.cpp : Defines the entry point for the console application.
//

#include  "stdafx.h"
#include <iostream>
#include <queue>
using namespace std;

// A Binary Tree Node
struct Node
{
	int data;
	Node* left, *right;
};

// Iterative method to do level order traversal line by line
void printLevelOrder(Node *node)
{
	// Base Case
	if (node == NULL)  return;

	// Create an empty queue for level order tarversal
	queue<Node *> q;

	// Enqueue Root and initialize height
	q.push(node);

	while (1)
	{
		// nodeCount (queue size) indicates number of nodes
		// at current lelvel.
		int nodeCount = q.size();
		if (nodeCount == 0)
			break;

		// Dequeue all nodes of current level and Enqueue all
		// nodes of next level
		while (nodeCount > 0)
		{
			Node *node = q.front();
			cout << node->data << " ";
			q.pop();
			if (node->left != NULL)
				q.push(node->left);
			if (node->right != NULL)
				q.push(node->right);
			nodeCount--;
		}
		cout << "$ ";
	}
	
}

// Utility function to create a new tree node
Node* newNode(int data)
{
	Node *temp = new Node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

// Driver program to test above functions
int main()
{
	// Let us create binary tree shown in above diagram
	Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->right = newNode(6);

	printLevelOrder(root);
	return 0;
}

