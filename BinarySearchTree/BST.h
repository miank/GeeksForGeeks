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
public:
	BST();

	node *CreateKey(int key);
	void AddLeaf(int key);
	void AddLeafPrivate(int key, node *ptr);
};