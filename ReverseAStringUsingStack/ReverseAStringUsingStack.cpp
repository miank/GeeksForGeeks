// ReverseAStringUsingStack.cpp 

#include "stdafx.h"
#include <iostream>
#include <stack>
#include <string>
using namespace std;

void reverse(char *str, int len)
{
	// Your code goes here
	stack<char> stk;
	for (int i = 0; i < len; i++)
	{
		stk.push(str[i]);
	}
	for (int i = 0; i < len; i++)
	{
		str[i] = stk.top();
		stk.pop();
	}
}


