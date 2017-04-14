// SearchingANumber.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0), n(0), pos(0), ele(0);
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		cin >> ele;
		int *arr = new int[n];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < n; i++)
		{
			if (ele == arr[i])
			{
				pos = i + 1;
				break;
			}
			else
			{
				pos = -1;
			}
		}
		cout << pos << endl;
	}
    return 0;
}

