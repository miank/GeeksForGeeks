// UnitDigit.cpp 

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

long long int factorial(long long int n)
{
	if (n > 1)
		return n * factorial(n - 1);
	else
		return 1;
}

int main()
{
	int t(0);
	cin >> t;
	long long int N(0);

	while (t--)
	{
		cin >> N;
		if (N > 5)
		{
			cout << 0 << endl;
		}
		else
		{
			long long int result(1);
			result = factorial(N);
			long long int n = result % 10;
			cout << n << endl;
		}
	}
	return 0;
}
