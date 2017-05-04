// OccurenceOfIntegerInLinked List.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
}*head;

// Display the contents of the linked list
void Display()
{
	Node *p = head;
	while (p != nullptr)
	{
		cout << p->data << endl;
		p = p->next;
	}
	cout << endl;
}

// Creating the Node
Node *CreateNode(int value)
{
	Node *temp = new Node();
	temp->data = value;

	Node *p(nullptr);

	if (head == nullptr)
	{
		head = temp;
		head->next = nullptr;
		return temp;
	}
	else
	{
		p = head;
		while (p->next != nullptr)
		{
			p = p->next;
		}
		temp->next = nullptr;
		p->next = temp;
	}
	return temp;
}

int NoOfOccurence(int search_for)
{
	Node *p = nullptr;
	p = head;
	int count(0);
	while (p != nullptr)
	{
		if (p->data == search_for)
			count++;
		p = p->next;
	}
	return count;
}

int main()
{
	int t(0), ele(0), n(0), key(0);
	Node *p(nullptr);

	cin >> t;
	for (int i(0); i < t; i++)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			Node *temp = CreateNode(ele);
		}
		cin >> key;
		int ele = NoOfOccurence(key);
		cout << ele << endl;
	}
    return 0;
}

