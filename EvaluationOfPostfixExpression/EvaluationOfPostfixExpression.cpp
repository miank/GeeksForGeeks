// EvaluationOfPostfixExpression.cpp 

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stack>
using namespace std;

void EvalPostfixExpr(string str)
{
	stack<int> stk;
	int l = str.length();

	for (int i = 0; i < l; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			char c = str[i];
			stk.push(c - '0');
		}
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
		{
			int value1 = stk.top();
			stk.pop();
			int value2 = stk.top();
			stk.pop();

			switch (str[i])
			{
			case '+':stk.push(value2 + value1);
				break;
			case '-':stk.push(value2 - value1);
				break;
			case '/':stk.push(value2 / value1);
				break;
			case '*':stk.push(value2 * value1);
				break;
			case '%':stk.push(value2 % value1);
				break;
			}
		}
	}
	cout << stk.top() << endl;
	stk.pop();
}

int main()
{
	int t(0);
	cin >> t;
	while (t > 0)
	{
		string str;
		cin >> str;
		EvalPostfixExpr(str);
		t--;
	}
	return 0;
}

