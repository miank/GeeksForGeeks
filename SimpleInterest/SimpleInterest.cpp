// SimpleInterest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n(0), p(0), r(0), t(0);
	cin >> n;

	while (n > 0)
	{
		cin >> p;
		cin >> r;
		cin >> t;

		int si = (p * r * t) / 100;
		cout << si << endl;
		n--;
	}

    return 0;
}

