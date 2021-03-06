// ConsonantsAndVowels.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

struct node
{
	int data;
	struct node *next;
}*head;

class SingleLinkedList
{
public:
	void ConstantAndVowels();
	void insertAtBegining();
	void insertAtEnd();
	void displayList();
	SingleLinkedList()
	{
		head = nullptr;
	}
};

void SingleLinkedList::insertAtBegining()
{
	// Code here
	char value;
	node *p = nullptr;
	cout << "Enter the value to be inserted at the begining of the List" << endl;
	cin >> value;
	node *temp = new node();
	temp->data = value;
	temp->next = nullptr;

	if (head == nullptr)
	{
		head = temp;
		head->next = nullptr;
	}
	else
	{
		p = head;
		head = temp;
		temp->next = p;
	}
	cout << "Element inserted successfully at the begining of the list " << endl;
}

void SingleLinkedList::insertAtEnd()
{
	char value;
	cout << "Enter the value to insert at the end of List " << endl;
	cin >> value;
	node *p = nullptr;

	node *temp = new node();
	temp->data = value;
	temp->next = nullptr;

	p = head;
	while (p->next != nullptr)
	{
		p = p->next;
	}
	p->next = temp;
	temp->next = nullptr;
	cout << "Element inserted successfully at the end " << endl;
}

// Constant and Vowels
void SingleLinkedList::ConstantAndVowels()
{
	node *temp = head;
	list<char> l1;
	list<char> l2;

	while (temp != nullptr)
	{
		if (temp->data == 'a' || temp->data == 'e' || temp->data == 'i' || temp->data == 'o' || temp->data == 'u')
		{
			l1.push_back(temp->data);
		}
		else
		{
			l2.push_back(temp->data);
		}
		temp = temp->next;
	}

	l1.sort();
	l2.sort();

	node *p = nullptr;
	head = nullptr;
	while (!l1.empty())
	{
		char ch = l1.front();
		node *temp = new node();
		temp->data = ch;
		temp->next = nullptr;

		if (head == nullptr)
		{
			head = temp;
			head->next = nullptr;
		}
		else
		{
			p = head;
			while (p->next != nullptr)
			{
				p = p->next;
			}
			p->next = temp;
			temp->next = nullptr;
		}
		l1.pop_front();
	}

	while (!l2.empty())
	{
		node *t = head;
		char ch = l2.front();
		node *temp = new node();
		temp->data = ch;
		temp->next = nullptr;

		t = head;
		while (t->next != nullptr)
		{
			t = t->next;
		}
		t->next = temp;
		temp->next = nullptr;
		l2.pop_front();
	}
}

void SingleLinkedList::displayList()
{
	node *p = nullptr;
	p = head;
	if (head == nullptr)
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

int main()
{
	int choice;
	SingleLinkedList s1;
	while (1)
	{
		cout << "1.Insert Node at beginning" << endl;
		cout << "2.Insert node at last" << endl;
		cout << "3.Constants and Vowels" << endl;
		cout << "4.Display List" << endl;
		cout << "Enter the choice" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1: cout << "Insert node at begining : " << endl;
			s1.insertAtBegining();
			break;
		case 2: cout << "Insert node at end : " << endl;
			s1.insertAtEnd();
			break;
		case 3: cout << "Constant And Vowels :" << endl;
			s1.ConstantAndVowels();
			break;
		case 4: cout << "Display List :" << endl;
			s1.displayList();
			break;
		default: cout << "Wrong choice: " << endl;
			exit(0);
		}
	}
    return 0;
}

