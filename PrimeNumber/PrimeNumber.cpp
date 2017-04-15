// PrimeNumber.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n(0), t(0), flag(1);
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int i = 2; i < n/2; i++)
		{
			if (n % i == 0)
			{
				flag = 1;				
				break;
			}
		}
	}
	if (flag == 0)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}

