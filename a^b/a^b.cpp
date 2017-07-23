// a^b.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0), a(0), b(0);
	long int result(0);
	cin >> t;

	while (t > 0)
	{
		cin >> a >> b;
		result = pow(a, b);
		cout << result << endl;
		t--;
	}

    return 0;
}

