// SortString.cpp 

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int t(0);
	cin >> t;

	while (t--)
	{
		string str;
		cin >> str;

		sort(str.begin(), str.end());
		cout << str << "\n";
	}
    return 0;
}

