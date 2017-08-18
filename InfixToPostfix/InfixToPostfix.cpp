// InfixToPostfix.cpp  

#include "stdafx.h"
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int prec(char str)
{
	if (str == '^')
		return 3;
	else if (str == '*' || str == '/')
		return 2;
	else if (str == '+' || str == '-')
		return 1;
	else
		return -1;
}

void InfixToPostfix(string str)
{
	stack<char> strStack;
	strStack.push('N');
	int length = str.size();
	string postfixStr;

	for (int i = 0; i < length; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
		{
			postfixStr += str[i];
		}
		else if (str[i] == '(')
		{
			strStack.push('(');
		}
		else if (str[i] == ')')
		{
			while (strStack.top() != 'N' && strStack.top() != '(')
			{
				char c = strStack.top();
				strStack.pop();
				postfixStr += c;
			}
			if (strStack.top() == '(')
			{
				char c = strStack.top();
				strStack.pop();
			}			
		}
		else
		{
			while (strStack.top() != 'N' && prec(str[i]) <= prec(strStack.top()))
			{
				char c = strStack.top();
				strStack.pop();
				postfixStr += c;
			}
			strStack.push(str[i]);
		}
	}

	// Pop all the remaining elements from the stack
	while (strStack.top() != 'N')
	{
		char c = strStack.top();
		strStack.pop();
		postfixStr += c;
	}
	cout << postfixStr << endl;
}

int main()
{
	int testCase(0);
	cin >> testCase;

	while (testCase > 0)
	{
		string str("");
		cin >> str;
		InfixToPostfix(str);
		testCase--;
	}

    return 0;
}

