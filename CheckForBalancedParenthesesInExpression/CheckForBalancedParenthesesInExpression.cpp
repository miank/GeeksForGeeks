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
	for (int i = 0; i < l; i++)
	{
		if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[')
		{
			st.push(expr[i]);
		}
		else
		{

		}
	}
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
			cout << "Balanced " << endl;
		}
		else
		{
			cout << "Not balanced " << endl;
		}
		t--;
	}
    return 0;
}

