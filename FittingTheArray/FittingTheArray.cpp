// FittingTheArray.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t(0), n(0), ele(0);
	vector<int> v1;
	vector<int> v2;
	int flag(1);
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			v1.push_back(ele);
		}
		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			v2.push_back(ele);
		}
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());

		for (int i = 0; i < n; i++)
		{
			if (v1[i] > v2[i])
			{
				flag = 0;
				break;
			}
		}
		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		v1.clear();
		v2.clear();

	}
    return 0;
}

