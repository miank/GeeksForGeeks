// WhyIsMelodySoChocolaty.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t(0), n(0), max(0), ele(0);
	vector<int> v;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			v.push_back(ele);
		}
		max = v[0] + v[1];
		for (int i = 0; i < n - 1; i++)
		{
			if (v[i] + v[i + 1] > max)
				max = v[i] + v[i + 1];
		}
		cout << max << endl;
		v.clear();
	}
	return 0;
}

