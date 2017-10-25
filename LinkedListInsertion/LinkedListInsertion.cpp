// LinkedListInsertion.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
}*start;

class SingleLinkedList
{
public:
	void insertAtBegining();
	void insertAtEnd();
	void displayList();
	void countNodes();
	void isLengthEvenOrOdd();
	void nodeAtGivenIndex();
	void SumOfLastNNodes();
	SingleLinkedList()
	{
		start = nullptr;
	}
};

void SingleLinkedList::insertAtBegining()
{
	// Code here
	int value;
	node *p = nullptr;
	cout << "Enter the value to be inserted at the begining of the List" << endl;
	cin >> value;
	node *temp = new node();
	temp->data = value;
	temp->next = nullptr;

	if (start == nullptr)
	{
		start = temp;
		start->next = nullptr;
	}
	else
	{
		p = start;
		start = temp;
		temp->next = p;
	}
	cout << "Element inserted successfully at the begining of the list " << endl;
}

void SingleLinkedList::insertAtEnd()
{
	int value;
	cout << "Enter the value to insert at the end of List " << endl;
	cin >> value;
	node *p = nullptr;

	node *temp = new node();
	temp->data = value;
	temp->next = nullptr;

	p = start;
	while (p->next != nullptr)
	{
		p = p->next;
	}
	p->next = temp;
	temp->next = nullptr;
	cout << "Element inserted successfully at the end " << endl;
}

void SingleLinkedList::displayList()
{
	node *p = nullptr;
	p = start;
	if (start == nullptr)
	{
		cout << "List is empty " << endl;
		return;
	}
	cout << "Elements of the list are " << endl;
	while (p != nullptr)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}

void SingleLinkedList::countNodes()
{
	int count(0);
	node *p = nullptr;
	p = start;
	cout << "No of Elements in the list are "<< " ";
	while (p != nullptr) 
	{
		count++;
		p = p->next;
	}
	cout << count << endl;
}

void SingleLinkedList::isLengthEvenOrOdd()
{
	int count(0);
	node *p = nullptr;
	p = start;
	while (p != nullptr)
	{
		count++;
		p = p->next;
	}
	if (count % 2 == 0)
		cout << "Even" << endl; // return 0
	else
		cout << "Odd" << endl; // return 1
}

void SingleLinkedList::nodeAtGivenIndex()
{
	node *p = start;
	int count(0);
	int value(0);
	cout << "Enter the value " << endl;
	cin >> value;

	while (p != nullptr)
	{
		if (count == value)
		{
			cout << p->data << endl;
			return;
		}
		p = p->next;
		count++;
	}
}

void SingleLinkedList::SumOfLastNNodes()
{
	int value(0), count(0), sum(0);
	cin >> value;
	cout << "Sum of last " << value << " nodes " << endl;
	node *p = start;
	while (p != nullptr)
	{
		if (count >= value)
		{
			sum = sum + p->data;
		}
		count++;
		p = p->next;
	}
	cout << "The sum of last " << value << "nodes is " << sum << endl;
}

int main()
{
	int choice;
	SingleLinkedList s1;
	while (1)
	{
		cout << "1.Insert Node at beginning" << endl;
		cout << "2.Insert node at last" << endl;
		cout << "3.Display nodes in list" << endl;
		cout << "4.Count nodes in list" << endl;
		cout << "5.Even or Odd " << endl;
		cout << "6.Node at given value " << endl;
		cout << "7.Sum of last N nodes " << endl;
		cout << "Enter the choice" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1: cout << "Insert node at begining: " << endl;
			s1.insertAtBegining();
			break;
		case 2: cout << "Insert node at end: " << endl;
			s1.insertAtEnd();
			break;
		case 3: cout << "Display nodes:" << endl;
			s1.displayList();
			break;
		case 4: cout << "Count nodes:" << endl;
			s1.countNodes();
			break;
		case 5: cout << "Even or Odd:" << endl;
			s1.isLengthEvenOrOdd();
			break;
		case 6: cout << "Node at given value:" << endl;
			s1.nodeAtGivenIndex();
			break;
		case 7: cout << "Sum of last nodes:" << endl;
			s1.SumOfLastNNodes();
			break;
		default: cout << "Wrong choice: " << endl;
			exit(0);
		}
	}
	return 0;
}

