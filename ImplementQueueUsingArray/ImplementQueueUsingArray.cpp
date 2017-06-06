// ImplementQueueUsingArray.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <iostream>
using namespace std;



// The structure of the class is
class Queue {
private:
	int arr[10001];
	int front;
	int rear;

public:
	Queue() { front = 0; rear = 0; }
	void push(int);
	int pop();
};


/* The method push to push element into the queue */
void Queue::push(int x)
{
	//Your Code
		if (rear == 10001)
			return;
	arr[rear] = x;
	rear++;
}

/*The method pop which return the element poped out of the queue*/
int Queue::pop()
{
	//Your Code
		if (front >= rear)
			return -1;
	int ele = arr[front];
	front++;
	return ele;
}


int main()
{
	return 0;
}

