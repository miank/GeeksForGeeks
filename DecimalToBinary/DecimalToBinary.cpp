// DecimalToBinary.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0), num(0), rem(0), i(0), quo(0);
	int *arr;
	cin >> t;

	while (t > 0)
	{
		cin >> num;
		while (num > 0)
		{
			arr = new int[i];
			rem = num % 2;
			quo = num / 2;
			num = quo;
			cout << rem;
		}		
		cout << endl;
		t--;
	}	
	return 0;
}

