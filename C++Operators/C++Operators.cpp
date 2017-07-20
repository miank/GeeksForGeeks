// C++Operators.cpp 

#include "stdafx.h"
#include <iostream>
#include <algorithm> 
using namespace std;

int main()
{
	int t(0), n(0), a(0), b(0);
	cin >> t;

	while (t > 0)
	{
		cin >> a >> b;
		int min = std::min(a, b);
		int max = std::max(a, b);
		cout << a + b << endl;
		cout << abs(a - b) << endl;
		cout << max / min << endl;
		cout << a * b << endl;
		t--;
	}
	return 0;
}

