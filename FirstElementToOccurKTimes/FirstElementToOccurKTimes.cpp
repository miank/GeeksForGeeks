// FirstElementToOccurKTimes.cpp 

#include "pch.h"
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	int t(0);
	cin >> t;

	while (t--)
	{
		int n(0);
		cin >> n;
		int k(0);
		cin >> k;

		int *arr = new int[n];
		unordered_map<int, int> map1;

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			map1[arr[i]]++;
		}

		bool flag = false;
		for (int i = 0; i < n; i++)
		{
			if (map1[arr[i]] == k)
			{
				cout << arr[i] << endl;
				flag = true;
				break;
			}
		}

		if (flag == false)
		{
			cout << -1 << endl;
		}
		map1.clear();
	}
}
