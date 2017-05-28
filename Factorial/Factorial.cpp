// Factorial.cpp

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0);
	cin >> t;	
	
	while (t > 0)
	{
		long int n(1);
		cin >> n;
		long int fact(1);

		for (int i = 1; i <= n; i++)
		{
			fact = fact * i;
		}
		cout << fact << endl;
		t--;
	}
    return 0;
}

