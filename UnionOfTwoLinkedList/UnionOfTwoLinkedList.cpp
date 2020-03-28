// UnionOfTwoLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

// Main piece of code snippet - GeeksForGeeks.org

//structure of the node is as
struct node
{
	int data;
	struct node* next;

	node(int x) {
		data = x;
		next = NULL;
	}

};

struct node* makeUnion(struct node* head1, struct node* head2)
{
	// code here
	node *temp1 = head1;
	node *temp2 = head2;
	set<int> s1;
	while (temp1 != nullptr)
	{
		s1.insert(temp1->data);
		temp1 = temp1->next;
	}


	while (temp2 != nullptr)
	{
		s1.insert(temp2->data);
		temp2 = temp2->next;
	}

	for (auto itr = s1.begin(); itr != s1.end(); itr++)
	{
		cout << *itr << " ";
	}
	//cout << endl;

	return NULL;
}