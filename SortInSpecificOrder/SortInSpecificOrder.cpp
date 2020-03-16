// SortInSpecificOrder.cpp

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t(0);
	cin >> t;

	while (t--)
	{
		int n(0);
		cin >> n;
		int *arr = new int[n];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		vector<int> vOdd;
		vector<int> vEven;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] % 2 == 0)
			{
				vEven.push_back(arr[i]);
			}
			else
			{
				vOdd.push_back(arr[i]);
			}
		}

		sort(vOdd.begin(), vOdd.end(), greater<int>());
		sort(vEven.begin(), vEven.end());

		for (int i = 0; i < vOdd.size(); i++)
		{
			cout << vOdd[i] << " ";
		}
		for (int i = 0; i < vEven.size(); i++)
		{
			cout << vEven[i] << " ";
		}
		vOdd.clear();
		vEven.clear();
		cout << endl;
	}
}
