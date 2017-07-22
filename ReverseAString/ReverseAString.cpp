// ReverseAString.cpp 

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int t(0);
	string str("");
	cin >> t;

	while (t--)
	{
		cin >> str;
		reverse(str.begin(), str.end());
		cout << str << endl;
	}
    return 0;
}

