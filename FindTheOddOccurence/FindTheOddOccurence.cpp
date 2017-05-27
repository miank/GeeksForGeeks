// FindTheOddOccurence.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0), n(0), ele(0), count(0);
	cin >> t;
	cin >> n;

	int *arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		ele = arr[i];
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			if (ele == arr[j])
			{
				count++;
			}
		}
		if (count % 2 != 0)
		{
			cout << ele << endl;
			return 0;
		}
		t--;
	}
    return 0;
}

