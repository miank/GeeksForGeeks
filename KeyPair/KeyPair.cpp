// KeyPair.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0), n(0), key(0), count(0);

	cin >> t;

	while (t > 0)
	{
		cin >> n;
		int *arr = new int[n];
		cin >> key;

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		
		bool flag(true);

		for (int i = 0; i < n; i++)
		{
			int ele = arr[i];
			if (flag)
			{
				for (int j = 1; j < n; j++)
				{
					if (ele + arr[j] == key)
					{
						cout << "Yes" << endl;
						flag = false;
						break;
					}
				}
				
			}
		}
		if(flag)
		{ cout << "No" << endl; }
		t--;
	}
	return 0;
}

