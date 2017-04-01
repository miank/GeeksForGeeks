// AdditionofTwoNumbers.cpp : 
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0), a(0), b(0);

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		int sum = a + b;
		cout << sum << endl;
	}

    return 0;
}

