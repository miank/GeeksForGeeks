// SumOfArray.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0), n(0), sum(0);
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		sum = 0;
		int *arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < n; i++)
		{
			sum = sum + arr[i];
		}
		cout << sum << endl;
	}


    return 0;
}

