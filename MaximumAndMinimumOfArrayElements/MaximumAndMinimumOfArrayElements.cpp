// MaximumAndMinimumOfArrayElements.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n(0), t(0), ele(0);
	cin >> t;
	while (t > 0)
	{
		vector<int> v1;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			v1.push_back(ele);
		}
		std::sort(v1.begin(), v1.end());
		int max = v1.back();
		cout << max << " ";
		int min = v1.front();
		cout << min << endl;
		t--;
	}
	return 0;
}

