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
	void InsertAtBeg();
	void InsertAtEnd();
};

node * LinkedList::CreateNode(int data)
{
	node *temp = new node();
	temp->info = data;
	temp->next = nullptr;
	return temp;
}

void LinkedList::InsertAtBeg()
{
	int value(0);
	cout << "Enter the value " << endl;
	cin >> value;

	node *temp = CreateNode(value);
	if (temp == nullptr)
	{
		temp = start->next;

	}




}

void LinkedList::InsertAtEnd()
{

}




int main()
{
    return 0;
}


