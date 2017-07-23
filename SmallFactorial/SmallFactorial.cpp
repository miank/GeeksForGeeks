// SmallFactorial.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0), n(0);
	long long int result(1), fact(0);
	cin >> t;

	while (t > 0)
	{
		cin >> n;
		result = 1;
		for (int i = 1; i <= n; i++)
		{
			result = fact + result * i;
		}
		cout << result << endl;
		t--;
	}
    return 0;
}

