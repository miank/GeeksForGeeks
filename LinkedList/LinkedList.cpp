// LinkedList.cpp : DataStructure Course

#include "stdafx.h"
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
	node *second = nullptr;
	node *third = nullptr;

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = nullptr;


    return 0;
}

