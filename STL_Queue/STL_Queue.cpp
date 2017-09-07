// STL_Queue.cpp 

#include "stdafx.h"
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

/*inserts an element x at
the back of the queue q */
void push(queue<int> &q, int x)
{
	//Your code here
	q.push(x);
}
/*returns the size of the queue q */
int getSize(queue<int> &q)
{
	//Your code here
	int a = q.size();
	return a;
}

/*returns the first element of the queue */
int getFront(queue<int> &q)
{
	//Your code here
	if (q.empty()) {
		return -1;
	}
	int a = q.front();
	return a;
}

/*returns the first element of the queue */
int getBack(queue<int> &q)
{
	//Your code here
	if (q.empty()) {
		return -1;
	}
	return q.back();
}

/*pop out the front element
from the queue q and returns it */
int pop(queue<int> &q)
{
	//Your code here
	if (q.empty()) {
		return -1;
	}
	int a = q.front();
	q.pop();
	return a;
}

int main()
{
	queue<int> q;
	return 0;
}

