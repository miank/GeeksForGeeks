// LevelOrderTraversal.cpp 

#include "stdafx.h"
#include <iostream>
#include <queue>
using namespace std;

struct Node
{
	int data;
	Node *left, *right;
};

void levelOrder(Node* node)
{
	//Your code here
	if (node == nullptr)
		return;
	queue<Node*> q;
	q.push(node);

	// while there is atleast one discovered node
	while (!q.empty())
	{
		Node* current = q.front();
		cout << current->data << endl;
		if (current->left != nullptr)
			q.push(current->left);
		if (current->right != nullptr)
			q.push(current->right);
	}
}

int main()
{
    return 0;
}

