// CheckForBalancedParenthesesInExpression.cpp 

#include "stdafx.h"
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool BalanceParenthesis(string expr)
{
	stack<char> st;
	int l = expr.size();
	char a, b, c;

	for (int i = 0; i < l; i++)
	{
		if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[')
		{
			st.push(expr[i]);
		}
		else
		{
			switch (expr[i])
			{
			case ')':
				a = st.top();
				st.pop();
				if (a == '{' || a == '[')
					cout << "Not balanced" << endl;
				break;
			case '}':
				a = st.top();
				st.pop();
				if (a == '(' || a == '[')
					cout << "Not balanced" << endl;
				break;
			case ']':
				a = st.top();
				st.pop();
				if (a == '{' || a == '(')
					cout << "Not balanced" << endl;
				break;
			}
		}
	}

	if (st.empty())
		return true;
	else
		return false;
}

int main()
{
	int t(0);
	cin >> t;

	while (t > 0)
	{
		string str;
		cin >> str;
		if (BalanceParenthesis(str))
		{
			cout << "balanced " << endl;
		}
		else
		{
			cout << "Not balanced " << endl;
		}
		t--;
	}
	return 0;
}

