// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Node {
	int data;
	Node *next;
};

void Traverse(struct Node *p) {
	while (p != nullptr) {
		cout << p->data << "->";
			p = p->next;
	}
	cout << endl;
}

int main()
{
	Node *head(nullptr);
	Node *first(nullptr);
	Node *second(nullptr);
	Node *third(nullptr);

	// Creating nodes
	first = new Node;
	second = new Node;
	third = new Node;

	// Assigning the address of first to head
	head = first;
	// Head pointing to first node
	first->data = 1;
	first->next = second;

	// Inserting data in second node and pointing to third.
	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = nullptr;

	/* head
		|
		|
		+-- - +-- - ++-- - +-- - ++---- + ------ +
		| 1 | o-----> | 2 | o-----> | 3 | NULL |
		+-- - +-- - ++-- - +-- - ++---- + ------ + */
	Traverse(head);
    return 0;
}

