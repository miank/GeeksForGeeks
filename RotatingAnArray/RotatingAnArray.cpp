// RotatingAnArray.cpp 

#include "pch.h"
#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<int> dq;
	int t(0), ele(0), shift(0);
	long long int n(0);
	cin >> t;

	while (t--)
	{
		cin >> n;
		cin >> shift;

		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			dq.push_back(ele);
		}
		for (int i = 0; i < shift; i++)
		{
			int a = dq.front();
			dq.pop_front();
			dq.push_back(a);
		}
		for (int i = 0; i < n; i++)
		{
			cout << dq[i] << " ";
		}
		cout << endl;
		dq.clear();

		
	}
	return 0;
}

