// RearrangeArrayAlternately.cpp 

#include "pch.h"
#include <iostream>
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

		int j = n - 1;
		for (int i = 0; i <= j; i++)
		{
			if (i == j)
			{
				cout << arr[j];
				break;
			}

			if (i < j)
			{
				cout << arr[j] << " " << arr[i] << " ";
				j--;
			}			
		}
		cout << endl;
	}
}

