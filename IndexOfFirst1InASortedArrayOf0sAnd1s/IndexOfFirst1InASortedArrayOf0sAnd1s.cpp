// IndexOfFirst1InASortedArrayOf0sAnd1s.cpp 

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t(0), n(0);
	cin >> t;

	while (t--)
	{
		cin >> n;
		int *arr = new int[n];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		bool flag = false;

		for (int i = 0; i < n; i++)
		{
			if (arr[i] == 1)
			{
				cout << i << endl;
				flag = true;
				break;
			}
		}

		if (!flag)
		{
			cout << -1 << endl;
		}
	}
	return 0;
}

