// CyclicallyRotateAnArrayByOne.cpp 

#include "pch.h"
#include <iostream>
#include <string>
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

		int x = arr[n - 1], i;
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = x;

		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	return 0;
}
