// NextGreaterElement.cpp 

#include "stdafx.h"
#include <iostream>
#include <stack>
using namespace std;

void NextGreaterElement(int *arr, int n)
{
	stack<int> st;
	int next, top;
	st.push(arr[0]);
	for (int i = 0; i < n; i++)
	{
		next = arr[i + 1];
		if(!st.empty())
		{
			top = st.top();
			st.pop();
			if (top < next)
			{
				cout << next << endl;
				st.push(next);
			}
			else
			{
				cout << -1 << endl;
			}
		}
	}
}

int main()
{
	int t(0);
	cin >> t;

	while (t > 0)
	{
		int n(0);
		cin >> n;
		int* arr = new int[n];
		
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		NextGreaterElement(arr, n);
		t--;
	}
    return 0;
}

