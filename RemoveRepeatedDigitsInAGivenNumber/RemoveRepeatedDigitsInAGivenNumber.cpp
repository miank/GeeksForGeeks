#include "stdafx.h"
#include <string>
#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		stack <int> stk;        
		stk.push(str[0]);
		for (int i = 1; i < str.size(); i++)
		{
			if (stk.top() != str[i])
			{
				cout << stk.top() - '0';
				stk.pop();
				stk.push(str[i]);
			}
			if (i == str.size()-1)
			{
				cout << stk.top()-'0';
				stk.pop();
			}
		}
		cout << "\n";
	}

	return 0;
}