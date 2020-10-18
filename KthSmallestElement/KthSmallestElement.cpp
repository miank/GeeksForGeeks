// KthSmallestElement.cpp 

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long long int t(0);
	cin >> t;

	while (t--)
	{
		long long int n(0), ele(0), k(0);
		cin >> n;
		vector<long long int> v;
		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			v.push_back(ele);
		}
		cin >> k;

		std::sort(v.begin(), v.end());

		cout << v[k - 1] << endl;
		v.clear();
	}
	return 0;
}

