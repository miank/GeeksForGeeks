// DeleteNodeInSingleLinkedList.cpp : 

#include "stdafx.h"
#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
}*start;

void DeleteNode(int value)
{
	int count(0);
	node *temp(nullptr);
	node *p = start;

	while (p != nullptr)
	{
		p = p->next;
		count++;
	}

	if (value == 1)
	{
		if (value == start->data)
		{
			temp = start;
			start = start->next;
			free(temp);
			return;
		}
	}

	// Delete the node in the mid
	if (value > 1 & value < count)
	{
		node *q(start);
		while (q->next != nullptr)
		{
			if (value == q->next->data)
			{
				temp = q->next;
				q->next = temp->next;
				free(temp);
			}
			q = q->next;
		}
	}

	// Deleting the last node
	if (value == count)
	{
		node *previous(nullptr);
		node *ptr = start;

		while (ptr->next != nullptr)
		{
			previous = ptr;
			ptr = ptr->next;
		}

		previous->next = nullptr;
		free(ptr);
	}
}

// Display the contents of the linked list
void Display()
{
	node *p = start;
	while (p != nullptr)
	{
		cout << p->data << endl;
		p = p->next;
	}
	cout << endl;
}

// Creating the node
node *CreateNode(int value)
{
	node *temp = new node();
	temp->data = value;

	node *p(nullptr);

	if (start == nullptr)
	{
		start = temp;
		start->next = nullptr;
		return temp;
	}
	else
	{
		p = start;
		while (p->next != nullptr)
		{
			p = p->next;
		}
		temp->next = nullptr;
		p->next = temp;
	}
	return temp;
}

// main function
int main()
{
	int t(0), ele(0), n(0), key(0);
	node *p(nullptr);

	cin >> t;
	for (int i(0); i < t; i++)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			node *temp = CreateNode(ele);
		}
		cin >> key;
		DeleteNode(key);
		Display();
	}
	return 0;
}

