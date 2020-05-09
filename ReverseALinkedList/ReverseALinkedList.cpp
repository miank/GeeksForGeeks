// ReverseALinkedList.cpp 

#include "pch.h"
#include <iostream>
using namespace std;


struct Node {
  int data;
  struct Node *next;
  Node(int x) {
	data = x;
	next = NULL;
  }
};

// Should reverse list and return new head.
Node* reverseList(Node *head)
{
	// Your code here

	if (head == nullptr)
	{
		return head;
	}

	Node *curr = head;
	Node * prev = nullptr;

	while (curr != nullptr)
	{
		Node *next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	return prev;

}