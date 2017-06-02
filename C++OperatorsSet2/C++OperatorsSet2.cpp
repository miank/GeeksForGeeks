// C++OperatorsSet2.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0), a(0), b(0);
	cin >> t;

	while (t > 0)
	{
		cin >> a >> b;
		if (a < b)
			cout << a << " is less than " << b << endl;
		else if (a > b)
			cout << a << " is greater than " << b << endl;
		else
			if (a == b)
				cout << a << " is equals to " << b << endl;
		t--;
	}

    return 0;
}

