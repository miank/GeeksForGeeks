// CountTheNodesOfLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include<iostream>
using namespace std;

/* Link list node */
struct Node
{
	int data;
	Node* next;

	Node(int x) {
		data = x;
		next = NULL;
	}

};

void push(struct Node** head_ref, int new_data)
{

	struct Node* new_node = new Node(new_data);

	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

int getCount(struct Node* head);

/* Drier program to test count function*/
int main()
{
	int T, i, n, l;

	cin >> T;

	while (T--) {
		struct Node *head = NULL;

		cin >> n;
		for (i = 1; i <= n; i++)
		{
			cin >> l;
			push(&head, l);
		}

		/* Check the count function */
		cout << getCount(head) << endl;
	}
	return 0;
}// } Driver Code Ends
/* Link list node */
/*
struct Node
{
	int data;
	Node* next;
	Node(int x) {  data = x;  next = NULL; }
}; */

// head : reference to head of linked list
int getCount(struct Node* head) {

	//Code here
	if (head == nullptr)
	{
		return 0;
	}

	int count = 0;
	while (head != nullptr)
	{
		head = head->next;
		count++;
	}
	return count;

}
