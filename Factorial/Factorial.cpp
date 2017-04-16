// Factorial.cpp

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0), n(1), fact(1);
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;

		while (n > 0)
		{
			fact = fact * n;
			n--;
		}
		cout << fact << endl;
	}
    return 0;
}

