// LinkedListInsertion.cpp 

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <list>
#include <algorithm>
using namespace std;

struct node
{
	int data;
	struct node *next;
}*start;

struct node1
{
	int data;
	struct node1 *next;
}*head;


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
	bool IdenticalList(node *head1, node1 *head2);
	int ModularNode(int k);
	void InsertInMiddleOfLinkedList();
	void FractionalNode();
	void SortLinkedList();
	void DeleteAlternateNodes();
	node* DeleteKeysInLinkedList();
	node* DeleteNodesGreaterValueOnRight();

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
	cout << "No of Elements in the list are " << " ";
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

bool SingleLinkedList::IdenticalList(node *head1, node1 *head2)
{
	if (head1 == nullptr || head2 == nullptr)
		return false;
	else
	{
		while (head1 != nullptr && head2 != nullptr)
		{
			if (head1->data != head2->data)
			{
				return false;
			}
			head1 = head1->next; // important
			head2 = head2->next;
		}
	}
	return true;
}

int SingleLinkedList::ModularNode(int k)
{
	node *temp = start;
	int i(0), t = -1;
	while (temp != nullptr)
	{
		i++;
		if (i%k == 0)
		{
			t = temp->data;
		}
		temp = temp->next;
	}
	return t;
}

void SingleLinkedList::InsertInMiddleOfLinkedList()
{
	node *temp = start;
	int count(0);

	while (temp != nullptr)
	{
		count++;
		temp = temp->next;
	}
	int mid = count / 2;

	temp = start;
	int cnt(0);
	while (temp != nullptr)
	{
		temp = temp->next;
		if (mid == cnt)
		{

		}
		cnt++;
	}

}

void SingleLinkedList::FractionalNode()
{
	int k(0);
	cout << "Enter the kth element " << endl;
	cin >> k;
	node *temp = start;
	node *temp1 = start;
	int count(0);

	while (temp != nullptr)
	{
		count++;
		temp = temp->next;
	}

	int val = static_cast<int>(ceil(count / k));
	int val1(0);

	while (temp1 != nullptr)
	{
		if (val == val1)
		{
			cout << temp1->data << endl;
			break;
		}
		val1++;
		temp1 = temp1->next;
	}
}

void SingleLinkedList::SortLinkedList()
{
	node *temp = start;
	list<int> l;

	while (temp != nullptr)
	{
		l.push_back(temp->data);
		temp = temp->next;
	}

	l.sort();
	node *p = nullptr;
	start = nullptr;
	while (!l.empty())
	{
		int num = l.front();
		node *temp = new node();
		temp->data = num;
		temp->next = nullptr;

		if (start == nullptr)
		{
			start = temp;
			start->next = nullptr;
		}
		else
		{
			p = start;
			while (p->next != nullptr)
			{
				p = p->next;
			}
			p->next = temp;
			temp->next = nullptr;
		}
		l.pop_front();
	}

	// Esay Solution would be 
	/*
	   int one_count=0,two_count=0,three_count=0;
	   Node *current = head;
	   while(current)
	   {
		   if(current->data==0)
		   one_count++;
		   else if(current->data==1)
		   two_count++;
		   else
		   three_count++;

		   current=current->next;
	   }

	   while(one_count>0)
	   {
		   head->data=0;
		   head = head->next;
		   one_count--;
	   }
	   while(two_count>0)
	   {
		   head->data=1;
		   head = head->next;
		   two_count--;
	   }
	   while(three_count>0)
	   {
		   head->data=2;
		   head = head->next;
		   three_count--;
	   }
	*/
}

void SingleLinkedList::DeleteAlternateNodes()
{
	struct node* ptr, *temp;
	ptr = start;
	while (ptr != NULL)
	{
		temp = ptr->next;
		ptr->next = temp->next;
		ptr = ptr->next;
		if (ptr == NULL)
			return;
		free(temp);
	}
}

node* SingleLinkedList::DeleteKeysInLinkedList()
{
	int key(0);
	cin >> key;

	if (!start) return start;

	while (start->data == key && start) {
		start = start->next;
	}
	if (!start) return start;

	node* temp = start->next;
	node* prev = start;
	while (temp) {
		if (temp->data == key) {
			prev->next = temp->next;
			free(temp);
			temp = prev->next;
		}
		else {
			prev = temp;
			temp = temp->next;
		}
	}
	return temp;
}

node* SingleLinkedList::DeleteNodesGreaterValueOnRight()
{
	if (!start)
		return start;

	/*while (start->data == key && start) {
		start = start->next;
	}
	if (!start) return start;*/

	node* temp = start->next;
	node* prev = start;
	while (temp != nullptr) {
		if (prev->data < temp->data) {
			prev->next = temp->next;
			cout << temp->data << " ";
			free(temp);			
			temp = prev->next;
		}
		prev = temp;
		if (temp != nullptr)
		{
			temp = temp->next;
		}
	}
	cout << endl;
	return temp;
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
		cout << "8.Fractional Node " << endl;
		cout << "9.Insert In Middle Of LinkedList " << endl;
		cout << "10.Sorting Of LinkedList " << endl;
		cout << "11.Delete alternate nodes of LinkedList " << endl;
		cout << "12.Delete keys in LinkedList " << endl;
		cout << "13.Delete Nodes Greater Value On Right " << endl;
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
		case 8: cout << "Fractional Node:" << endl;
			s1.FractionalNode();
			break;
		case 9: cout << "Insert in the middle of linked list:" << endl;
			s1.InsertInMiddleOfLinkedList();
			break;
		case 10: cout << "Sorting of linked list:" << endl;
			s1.SortLinkedList();
			break;
		case 11: cout << "Delete alternate nodes of linked list:" << endl;
			s1.DeleteAlternateNodes();
			break;
		case 12: cout << "Delete keys of linked list:" << endl;
			s1.DeleteKeysInLinkedList();
			break;
		case 13: cout << "Delete greater values on right:" << endl;
			s1.DeleteNodesGreaterValueOnRight();
			break;
		default: cout << "Wrong choice: " << endl;
			exit(0);
		}
	}
	return 0;
}