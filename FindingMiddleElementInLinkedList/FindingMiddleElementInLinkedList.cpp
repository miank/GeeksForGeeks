// FindingMiddleElementInLinkedList.cpp 

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

struct Node
{
	int data;
	Node *next;
}*head;

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

int MiddleElement()
{
	int count(0);
	Node *p(head);
	Node *q(head);
	int pos(1);

	while (p != nullptr)
	{
		p = p->next;
		count++;
	}

	if (count % 2 == 0)
	{
		count = (count / 2) + 1;
		
		while (q != nullptr)
		{
			if (count == pos)
				return q->data;
			q = q->next;
			pos++;
		}
	}
	else
	{
		count = floor(count / 2) + 1;
		while (q != nullptr)
		{
			if (count == pos)
				return q->data;
			q = q->next;
			pos++;
		}
	}
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
		int midelement = MiddleElement();
		cout << midelement;
	}
    return 0;
}

