// UnionOfTwoArray.cpp 

#include "pch.h"
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
	int t(0);
	cin >> t;

	while (t--)
	{
		int n(0), m(0);
		cin >> n >> m;

		set<int> s;

		int *arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			s.insert(arr[i]);
		}
		int *arr1 = new int[m];
		for (int i = 0; i < m; i++)
		{
			cin >> arr1[i];
			s.insert(arr1[i]);
		}

		cout << s.size() << endl;
	}
	return 0;
}

