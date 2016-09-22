// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Node {
	int data;
	Node *next;
};

int main()
{
	Node *head(nullptr);
	Node *second(nullptr);
	Node *third(nullptr);

	// Head pointing to first node
	head->data = 1;
	head->next = second;

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

    return 0;
}

