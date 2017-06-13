// BalancedArray.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0), n(0), ele(0);
	int *arr, subArr1(0), subArr2(0);

	cin >> t;

	while (t > 0)
	{
		cin >> n;
		int *arr = new int[n];

		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			arr[i] = ele;
		}

		int size = n / 2;

		for (int i = 0; i < n / 2; i++)
		{
			subArr1 = subArr1 + arr[i];
		}

		for (int j = n / 2; j < n; j++)
		{
			subArr2 = subArr2 + arr[j];
		}

		int diff(0);
		if (subArr1 < subArr2)
		{
			diff = subArr2 - subArr1;
			cout << diff << endl;
		}
		else
		{
			diff = subArr1 - subArr2;
			cout << diff << endl;
		}
		subArr1 = 0;
		subArr2 = 0;
		diff = 0;
		t--;
	}

    return 0;
}

