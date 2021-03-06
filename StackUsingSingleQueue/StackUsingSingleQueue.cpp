// StackUsingSingleQueue.cpp 

#include "pch.h"
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

class Stack
{
	queue<int> q;
public:
	void Push(int x);
	void Pop();
	void Top();
	void Empty();
	void Display();
};

void Stack::Push(int x)
{
	q.push(x);
}

void Stack::Pop()
{
	while (!q.empty())
	{
		int x = q.back();
		cout << "Element popped from stack " << x << endl;
		q.pop();
	}
}

void Stack::Display()
{
	while (!q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}
	cout << endl;
}

void Stack::Empty()
{
	if (q.size() < 0)
	{
		cout << "Stack is empty " << endl;
	}
}

void Stack::Top()
{
	int x = q.back();
	cout << "Stack top element is " << x << endl;
}

int main()
{
	Stack s;
	s.Push(1);
	s.Push(2);
	s.Push(3);
	s.Push(4);
	s.Push(5);
	s.Push(6);
	s.Top();
	s.Display();
	s.Push(1);
	s.Push(2);
	s.Push(3);
	s.Push(4);
	s.Push(5);
	s.Push(6);
	s.Top();
	s.Display();
	s.Empty();
}
