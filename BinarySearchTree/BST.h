#pragma once
class BST
{
private:
	struct node
	{
		int key;
		node *left;
		node *right;
	};
	node *root;
	void AddLeafPrivate(int key, node *ptr);
	void PrintInOrderPrivate(node *ptr);
public:
	BST();
	node *CreateKey(int key);
	void AddLeaf(int key);
	void PrintInOrder();
};