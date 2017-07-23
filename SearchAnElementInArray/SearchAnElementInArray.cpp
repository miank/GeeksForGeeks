// SearchAnElementInArray.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0), n, ele, flag(0);
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		int *arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		cin >> ele;
		flag = 0;
		for (int i = 0; i < n; i++)
		{
			if (ele == arr[i])
			{
				cout << i << endl;
				flag = 1;
				break;
			}
		}
		if (!flag) cout << -1 << endl;
	}
    return 0;
}

