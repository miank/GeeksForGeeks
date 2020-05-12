// DequeImpl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <deque>
using namespace std;
//User function Template for C++

/* Function to push element to front
* dq : dqueue in which element is to be pushed
* x : element to be pushed
*/
void push_back_pb(deque<int> &dq, int x) {

	// Your code here
	dq.push_back(x);
}

/* Function to pop element from back
* dq : dqueue From which element is to be popped
*/
void pop_back_ppb(deque<int> &dq) {

	if (!dq.empty())
		/*Your code here*/
		dq.pop_back();
	else
		return;

}

/* Function to return element from front
* dq : dqueue from which element is to be returned
*/
int front_dq(deque<int> &dq) {

	if (!dq.empty())
		/*Your code here*/
		return dq.front();
	else
		return -1;

}

/* Function to push element to front
* dq : dqueue in which element is to be pushed
* x : element to be pushed
*/
void push_front_pf(deque<int> &dq, int x) {

	// Your code here
	dq.push_front(x);
}