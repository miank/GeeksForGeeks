// AddingOne.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0), n(0), carry(1), sum(0);
	cin >> t;	
	while (t > 0)
	{
		cin >> n;
		int *arr = new int[n];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < n; i++)
		{
			cout << arr[i];
		}

		for (int i = n - 1; i >= 0; i--)
		{
			sum = arr[i] + carry;
			if (sum > 9)
			{
				carry = 1;
				arr[i] = 0;
			}
			else
			{
				carry = 0;
			}
		}
		t--;
	}
	cout << sum << endl;
    return 0;
}

