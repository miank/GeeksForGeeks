// DeleteMiddleElementOfStack.cpp 

#include "stdafx.h"
#include <iostream>
#include <stack>
using namespace std;

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
stack<int> DeleteMid(stack<int> s, int size, int current = 0)
{
	//Your code here
	size = s.size() / 2;
	while (!s.empty())
	{
		if (current == size)
		{
			s.pop();
		}
		else
		{
			cout << s.top() << " ";
			s.pop();
		}
		current++;
	}
	return s;
}

int main()
{
	int t, n, x;
	cin >> t;
	while (t--)
	{
		stack<int>s;
		cin >> n;
		for (int i = 0; i<n; i++)
		{
			cin >> x;
			s.push(x);
		}
		if (n == 1)
		{
			cout << s.top() << endl;
			goto label;
		}
		s = DeleteMid(s, n, 0);
		while (!s.empty())
		{
			x = s.top();
			s.pop();
			cout << x << " ";
		}
		cout << endl;
	label:;
	}
	return 0;
}


