// LinkedListOfStringsFormsAPalindrome.cpp 

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct Node
{
	string data;
	Node* next;

	Node(string x) {
		data = x;
		next = NULL;
	}
};

Node *newNode(string str)
{
	Node *new_node = new Node(str);
	new_node->next = NULL;
	return new_node;
}

bool compute(struct Node* root);

void print(Node *root)
{
	Node *temp = root;

	while (temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
}

int main() {
	// your code goes here
	int T;
	cin >> T;
	while (T--)
	{
		int K;
		cin >> K;
		struct Node *head = NULL;
		struct Node *temp = head;

		for (int i = 0; i < K; i++) {
			string str = "";
			cin >> str;
			if (head == NULL)
				head = temp = new Node(str);
			else
			{
				temp->next = new Node(str);
				temp = temp->next;
			}
		}
		if (compute(head))
			cout << "True" << endl;
		else
			cout << "False" << endl;
	}
	return 0;
}// } Driver Code Ends


/*
The structure of linked list is the following
struct Node
{
	string data;
	Node* next;

	Node(int x){
		data = x;
		next = NULL;
	}
};
*/
bool compute(Node* root)
{
	//Your code goes here
	string str;

	Node *temp = nullptr;
	temp = root;

	while (temp != nullptr)
	{
		str += temp->data;
		temp = temp->next;
	}

	int length = str.length();

	// Match characters from beginning and 
	// end. 
	for (int i = 0; i < length / 2; i++)
		if (str[i] != str[length - i - 1])
			return false;

	return true;
}
