// NumberOfDiagonals.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0), x;
	cin >> t;

	while (t > 0)
	{
		cin >> x;
		cout << (x * (x - 3) / 2) << endl;
		t--;
	}
    return 0;
}

