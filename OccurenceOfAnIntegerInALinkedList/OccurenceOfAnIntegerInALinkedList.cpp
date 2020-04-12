// OccurenceOfAnIntegerInALinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include <map>
using namespace std;

struct node
{
	int data;
	struct node* next;

	node(int x) {
		data = x;
		next = NULL;
	}
}*head;

int count(struct node* head, int search_for)
{
	//add your code here

	map<int, int> m1;

	node *temp = head;
	while (temp != nullptr)
	{

		m1[temp->data]++;
		temp = temp->next;
	}

	for (auto i = m1.begin(); i != m1.end(); i++)
	{
		if (i->first == search_for)
		{
			return i->second;
		}
	}

	return 0;
}