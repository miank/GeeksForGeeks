// EasyString.cpp 

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	int t(0);
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;

		stack<int> stk;
		stk.push(tolower(str[0]));
		int count(1);

		for (int i = 1; i <= str.size(); i++)
		{
			char ch = stk.top();
			if (ch == tolower(str[i]))
			{
				stk.push(ch);
				count++;
			}
			else
			{
				cout << count << ch;
				while (!stk.empty())
				{
					stk.pop();
				}
				stk.push(str[i]);
				count = 1;
			}
		}
	}
	cout << endl;
	return 0;
}

