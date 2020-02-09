// CommonElements.cpp 

#include "pch.h"
#include <iostream>
#include <map>
using namespace std;

int main()
{
	int t(0);
	cin >> t;

	map<long long, long long> mp;
	long long k(0);

	while (t--)
	{
		long long a(0), b(0), c(0);
		cin >> a >> b >> c;

		for (int i = 0; i < a; i++)
		{
			long long k;
			cin >> k;
			mp[k] = 1;
		}

		for (int i = 0; i < b; i++)
		{
			long long k;
			cin >> k;
			if (mp[k] == 1)
			{
				mp[k] = 2;
			}
		}

		for (int i = 0; i < c; i++)
		{
			long long k;
			cin >> k;
			if (mp[k] == 2)
			{
				mp[k] = 3;
			}
		}

		bool flag = false;

		for (auto i = mp.begin(); i != mp.end(); i++)
		{
			if (i->second == 3)
			{
				cout << i->first << " ";
				flag = true;
			}
		}

		if (flag == false)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << endl;
		}
		mp.clear();
	}

}

