// SumOfSeries.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0), n(0), sum(0);
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			sum = sum + i;
		}
		cout << sum << endl;
	}
    return 0;
}

