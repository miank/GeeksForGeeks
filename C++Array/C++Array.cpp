// C++Array.cpp

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t(0), n(0), ele(0), loc(0);
	cin >> t;
	vector<int> ivec;
	while (t > 0)
	{
		cin >> n;
		cin >> loc;
		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			ivec.push_back(ele);
		}
		cout << ivec[loc] << endl;
		ivec.clear();
		t--;		
	}
    return 0;
}

