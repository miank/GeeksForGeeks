// ReverseArrayInGroups.cpp 

#include "pch.h"
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int t(0);
	cin >> t;

	while (t--)
	{
		int n(0), k(0);
		cin >> n >> k;
		int *arr = new int[n];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		int left(0), right(0);
		
		for (int i = 0; i < n; i += k)
		{
			left = i;
			right = std::min(i + k - 1, n - 1);

			while (left < right)
			{
				swap(arr[left++], arr[right--]);
			}
		}

		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
}
