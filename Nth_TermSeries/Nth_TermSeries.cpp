// Nth_TermSeries.cpp 
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0),sum(0), num(0);
	cin >> t;
	while (t--)
	{
		sum = 0;
		cin >> num;
		for (int i = 1; i <= num; i++)
		{
			sum = sum + i;
		}
		cout << sum << endl;
	}
}
