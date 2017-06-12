// KrishnamurthyNumber.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0), num(0), rem(0), fact(1), quo(0), sum(0), temp(0);
	cin >> t;

	while (t > 0)
	{
		cin >> num;

		if (num == 2) {
			cout << "YES" << endl;
			return 0;
		}
		temp = num;
		while (temp > 0)
		{
			int rem(0);
			rem = temp % 10;
			quo = temp / 10;
			for (int i = 1; i <= rem; i++)
			{
				fact = fact * i;
			}
			sum += fact;
			temp = quo;
			fact = 1;
		}
		
		if (sum == num)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		t--;
	}


    return 0;
}

