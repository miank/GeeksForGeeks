// SortArrayWith01And2.cpp 

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int t(0);
	cin >> t;

	while (t--)
	{
		long long int n(0);
		cin >> n;
		int cnt0(0), cnt1(0), cnt2(0);

		int *arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] == 0)
				cnt0++;
			else if (arr[i] == 1)
				cnt1++;
			else
			{
				if (arr[i] == 2)
				{
					cnt2++;
				}
			}
		}

		for (int i = 0; i < cnt0; i++)
		{
			cout << 0 << " ";
		}
		for (int i = 0; i < cnt1; i++)
		{
			cout << 1 << " ";
		}
		for (int i = 0; i < cnt2; i++)
		{
			cout << 2 << " ";
		}
		delete arr;
		cout << endl;
	}

	return 0;
}