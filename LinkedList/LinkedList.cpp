// LinkedList.cpp 

#include "pch.h"
#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

int main()
{
	node *head = nullptr;
	node *first = nullptr;
	node *second = nullptr;
	node *third = nullptr;

	first = new node();
	second = new node();
	third = new node();

	first->data = 1;
	first->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = nullptr;

	// Linked List Traversal
	head = first;
	while (head != nullptr)
	{
		cout << head->data << " ";
		head = head->next;
	}

	cout << endl;
	return 0;
}
