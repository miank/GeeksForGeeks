// InsertNode.cpp : Linked List operations.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Node {
	int data;
	Node *next;
}*head;

Node *CreateNode(int value) {
	Node *temp = new Node;
	if (temp == nullptr) {
		cout << "Memory not allocated " << endl;
		return 0;
	}
	else {
		temp->data = value;
		temp->next = nullptr;
		return temp;
	}

}
void InsertFront() {
	int ele;
	cout << "Enter the element to insert " << endl;
	cin >> ele;
	Node *temp;
	Node *newNode;
	newNode = CreateNode(ele);

	if (head == nullptr)
	{
		head = newNode;
		newNode->next = nullptr;
	}
	else {
		temp = head;
		head = newNode;
		head->next = temp;
	}
	return;
}

void NodeEnd()
{
	int value;
	Node *temp = nullptr;
	Node *newNode = new Node();
	int ele;
	cout << "Enter the element to insert " << endl;
	cin >> ele;
	newNode = CreateNode(ele);
	temp = head;

	while (temp != nullptr) {
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->next = nullptr;
	cout << "Element inserted successfully" << endl;
	return;
}

void PrintList() {
	Node *temp;
	temp = head;
	if (temp == NULL)
	{
		cout << "The list is empty" << endl;
		return;
	}

	while (head != nullptr) {
		cout << head->data << "->";
		head = head->next;
	}
}

void LengthOfList() {
	int count(0);
	Node *temp = head;
	while (temp != nullptr)
	{
		temp = temp->next;
		count++;
	}
}

int main()
{
	int ch(0);
	int ele = 0;
	while (1)
	{
		cout << "Linked List Operations " << endl;
		cout << "1. Insert a node at front" << endl;
		cout << "2. Insert a node at end" << endl;
		cout << "3. Display List" << endl;
		cout << "4. Length of Linked List" << endl;
		cout << "8. Exit " << endl;
		cout << "Enter your choice" << endl;
		cin >> ch;
		switch (ch)
		{
		case 1:InsertFront();
			break;
		case 2: NodeEnd();
			break;
		case 3: PrintList();
			break;
		case 4: LengthOfList();
			break;
		/*case 5:ReverseList();
			break;*/
		case 8: exit(0);
			break;
		default:
			cout << "Error in choice" << endl;
			break;
		}
	}

	return 0;
}

