// MaximumProductOfTwoNumbers.cpp 

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int t(0), n(0);
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<int> v1;
		for (int i = 0; i < n; i++)
		{
			int ele(0);
			cin >> ele;
			v1.push_back(ele);
		}
		sort(v1.begin(), v1.end());
		cout << v1[n - 2] * v1[n - 1] << endl;
		v1.clear();
	}

    return 0;
}

