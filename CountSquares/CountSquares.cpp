// CountSquares.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0);
	long long n(0);
	cin >> t;

	while (t--)
	{
		int count(0);
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			if (i*i >= n)
			{
				break;
			}
			count++;
		}
		cout << count << endl;
	}
}

