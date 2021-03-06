// QueueUsingStack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Queue
{
	stack<int> s1, s2;
public:
	void EnQueue(int x)
	{
		s1.push(x);
	}

	int Dequeue()
	{
		if (s1.empty() && s2.empty())
		{
			cout << "Q is empty " << endl;
			exit(0);
		}

		if (s2.empty())
		{
			while (!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
		int x = s2.top();
		s2.pop();
		return x;
	}

};

int main()
{
	Queue q;
	q.EnQueue(1);
	q.EnQueue(2);
	q.EnQueue(3);

	cout << q.Dequeue() << endl;
	cout << q.Dequeue() << endl;
	cout << q.Dequeue() << endl;
}
