// ArraySubsetOfAnotherArray.cpp 

#include "pch.h"
#include <iostream>
#include <map>
using namespace std;

int main()
{
	int t(0);
	cin >> t;

	while (t--)
	{
		int m(0), n(0), ele;
		cin >> m >> n;
		int *arr1 = new int[m];
		int *arr2 = new int[n];

		map<int, int> m1;

		for (int i = 0; i < m; i++)
		{
			cin >> arr1[i];
			m1[arr1[i]]++;
		}

		for (int i = 0; i < n; i++)
		{
			cin >> arr2[i];
			m1[arr2[i]]++;
		}
		int count = 0;
		for (auto i = m1.begin(); i != m1.end(); i++)
		{
			if (i->second == 2)
			{
				count++;
			}
		}

		if (count >= n)
		{
			cout << "Yes" << endl;
		}
		else
			cout << "No" << endl;
	}
}

