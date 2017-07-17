// FindSecondLargestElement.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t(0), n(0), ele(0);
	vector<int> ivec;

	cin >> t;
	while (t > 0)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			ivec.push_back(ele);
		}
		sort(ivec.begin(), ivec.end());
		cout << ivec[n - 2];
		ivec.clear();
		t--;
	}
    return 0;
}

