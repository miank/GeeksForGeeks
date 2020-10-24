// FindTheMedian.cpp 

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
public:
	int find_median(vector<int> v)
	{
		int n = v.size();
		sort(v.begin(), v.end());

		if (n > 2)
		{
			if (n % 2 != 0)
			{
				int i = n / 2;
				return v[i];
			}
			else
			{
				int i = n / 2;
				int j = (n - 1) / 2;
				return (v[i] + v[j]) / 2;
			}
		}
		else
		{
			return ((v[0] + v[1]) / 2);
		}
	}
};

int main()
{
	Solution obj;
	vector<int> v;
	int ele;

	int n(0);
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}
	int medianValue = obj.find_median(v);
	cout << medianValue << endl;
	return 0;
}
