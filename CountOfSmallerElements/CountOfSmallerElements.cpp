// CountOfSmallerElements.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t(0), n(0), sEle(0);
	vector<int> v;
	cin >> t;
	while (t--)
	{
		int count(0);
		cin >> n;
		int ele(0);
		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			v.push_back(ele);
		}
		cin >> sEle;
		for (int i = 0; i < n; i++)
		{
			if (v[i] <= sEle)
				++count;
		}
		cout << count << endl;
		v.clear();
	}
    return 0;
}

