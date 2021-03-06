// AlternativeSorting.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t(0), n(0), ele(0);
	cin >> t;

	while (t--)
	{
		cin >> n;
		int *arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr+n);
		int i = 0, j = n - 1;
		while (i < j)
		{
			cout << arr[j--] << " ";
			cout << arr[i++] << " ";
		}
		// For printing the last element when no of elements are odd.

		if (n % 2 != 0)
			cout << arr[i];
		cout << endl;
		arr = nullptr;
	}
    return 0;
}

