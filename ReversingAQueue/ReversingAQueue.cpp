// ReversingAQueue.cpp 

#include "stdafx.h"
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void Print(queue<int>& q)
{
	while (!q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}
}

void reverseQueue(queue<int> &q)
{
	stack<int> st;
	while (!q.empty())
	{
		st.push(q.front());
		q.pop();
	}

	while (!st.empty())
	{
		q.push(st.top());
		st.pop();
	}
}

// main 
int main()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.push(60);
	q.push(70);
	q.push(80);
	q.push(90);
	q.push(100);
	reverseQueue(q);
	Print(q);
    return 0;
}

