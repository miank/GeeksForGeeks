// SumOfDigits.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0), n(0);
	int sum(0);
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		sum = 0;
		while (n > 0)
		{
			int r = n % 10;
			sum = sum + r;
			int q = n / 10;
			n = q;
		}
		cout << sum << endl;
	}
	
    return 0;
}

