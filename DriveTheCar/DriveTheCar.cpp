// DriveTheCar.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0), n(0), k(0);
	cin >> t;

	while (t--)
	{
		cin >> n;
		cin >> k;
		int *arr = new int[n];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int cnt(0);
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > k)
			{
				int dist = arr[i] - k;
				k = k + dist;
				cnt = cnt + dist;
			}
		}
		if (cnt == 0)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << cnt << endl;
		}
	}
    return 0;
}

