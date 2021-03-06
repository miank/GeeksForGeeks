// MajorityElement.cpp 

#include "stdafx.h"
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int temp;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> temp;
			a[i] = temp;
		}
		sort(a, a + n);
		int count = 1;
		int ans = -1;
		for (int i = 0; i < n - 1; i++)
		{
			while (a[i] == a[i + 1])
			{
				count++;
				i++;
			}
			if (count > n / 2)
			{
				ans = i;
				break;
			}
			else
			{
				count = 1;
			}
		}
		if (ans != -1)
			cout << a[ans] << endl;
		else
			cout << "-1\n";
	}

	return 0;
}

