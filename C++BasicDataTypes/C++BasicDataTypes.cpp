// C++BasicDataTypes.cpp 

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t(0);
	cin >> t;
	string str;
	for (int i = 0; i < t; i++)
	{
		cin >> str;
		if (str[0] >= '0' & str[0] <= '9')
		{
			if (str.length() > 7)
				cout << 8 << endl;
			else cout << 4 << endl;
		}
		else cout << 1 << endl;
	}
}
