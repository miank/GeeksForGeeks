// DetectLoopInLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <map>
using namespace std;

struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
	int detectloop(Node *head) {

		// your code here
		map<Node *, int> m1;

		while (head != nullptr)
		{
			m1[head]++;
			if (m1[head] > 1)
			{
				return 1;
			}
			head = head->next;
		}

		return 0;

	}
