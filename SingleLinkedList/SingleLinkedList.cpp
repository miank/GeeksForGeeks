// SingleLinkedList.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

struct node
{
	int info;
	node *next;
}*start;

class LinkedList
{
public:
	LinkedList()
	{
		start = nullptr;
	}
	node *CreateNode(int data);
	void Display();
	void SearchList();
	void InsertAtBeg();
	void InsertAtEnd();
	void InsertBetween(); // Not Implemented
	void InsertAfterNode();
	void InsertBeforeNode();
	void InsertAtPosition();
};

// Creating the node
node * LinkedList::CreateNode(int data)
{
	node *temp = new node();
	temp->info = data;
	temp->next = nullptr;
	return temp;
}

// Display the contents of the list
void LinkedList::Display()
{
	node *temp = start;
	while (temp != nullptr)
	{
		cout << temp->info << " ";
		temp = temp->next;
	}
}

// Search the list
void LinkedList::SearchList()
{
	int value(0), pos = 1;
	cout << "Enter the value to seach " << endl;
	cin >> value;

	node *p = start;
	while (p != start)
	{
		if (p->info == value)
		{
			cout << "Value found at " << pos;
		}
		pos++;
	}
}

// Insert the list at the end
void LinkedList::InsertAtBeg()
{
	int value(0);
	cout << "Enter the value " << endl;
	cin >> value;

	node *temp = CreateNode(value);
	if (start == nullptr)
	{
		temp->next = nullptr;
		start = temp;
		return;
	}
	else
	{
		temp->next = start;
		start = temp;
		return;
	}
}

// Insert the list at the end
void LinkedList::InsertAtEnd()
{
	int value(0);
	node *temp(nullptr);

	cout << "Enter the value ";
	cin >> value;
	node *newNode = CreateNode(value);

	temp = start;
	while (temp != nullptr)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->next = nullptr;
}

// Insert b/w two nodes -- NOT IMPLEMENTED
void LinkedList::InsertBetween()
{
}

void LinkedList::InsertAfterNode()
{
	int value(0);
	cout << "Enter the value after which node to inserted ";
	cin >> value;

	node *temp = CreateNode(value);
	node *p = start;
	while (p != nullptr)
	{
		if (p->info == value)
		{
			temp->next = p->next;
			p->next = temp;
		}
		p = p->next;
	}
}

void LinkedList::InsertBeforeNode()
{
	int value(0);
	cout << "Enter the value before which node to inserted ";
	cin >> value;

	node *temp = CreateNode(value);
	if (start->info == value)
	{
		temp->next = start;
		start = temp;
	}
	node *p = start;
	while (p != nullptr)
	{
		if (p->info == value)
		{
			temp->next = p->next;
			p->next = temp;
		}
		p = p->next;
	}
}

void LinkedList::InsertAtPosition()
{
	int value(0);
	cout << "Enter the value to be inserted at specific position " << endl;
	cin >> value;

	node *temp = CreateNode(value);


}

int main()
{
    return 0;
}


