// MultiplyArray.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t(0), ele(0), n(0), sum(1);
	cin >> t;
	while (t > 0)
	{
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> ele;
			sum = sum * ele;
		}
		cout << sum << endl;
		sum = 1;
		t--;
	}

    return 0;
}

