// FrequencyOfArrayElements.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t(0), n(0), ele(0);
	cin >> t;

	while (t--)
	{
		cin >> n;
		int count(0);
		vector<int> vInt;
		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			vInt.push_back(ele);
		}
		sort(vInt.begin(), vInt.end());

		for (int i = 1; i <= n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == vInt[i])
				{
					count++;
				}
				else
				{
					break;
				}
			}
		}
		
	}
    return 0;
}

