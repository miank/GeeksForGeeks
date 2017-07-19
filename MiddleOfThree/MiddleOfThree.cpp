// MiddleOfThree.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t(0), ele(0);
	cin >> t;
	vector<int> ivec;

	while (t > 0)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> ele;
			ivec.push_back(ele);
		}
		cout << ivec[1] << endl;
		ivec.clear();
		t--;
	}

    return 0;
}

