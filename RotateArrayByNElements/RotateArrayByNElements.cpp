// RotateArrayByNElements.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int t(0), n(0), ele(0), shift(0);
	vector<int> v;
	cin >> t;

	while (t--)
	{
		cin >> n;
		cin >> shift;
		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			v.push_back(ele);
		}

		for (int i = 0; i < shift; i++)
		{
			int a = v.front();
			v.erase(v.begin());
			v.push_back(a);
		}
		for (int i = 0; i < n; i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
		v.clear();
	}
	return 0;
}
