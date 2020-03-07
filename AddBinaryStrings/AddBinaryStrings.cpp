// AddBinaryStrings.cpp 

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int t(0);
	cin >> t;

	while (t--)
	{
		string str1, str2;
		cin >> str1 >> str2;

		cout << str1 << " " << str2 << endl;

		int len = str1.length() > str2.length() ? str1.length() : str2.length();
		cout << len;

		int carry = 0;
		for (int i = len - 1; i >= 0; i--)
		{
			vector<int> vInt;
			int a = str1[i] - '0';
			int b = str2[i] - '0';

			if (a == 0 && b == 0)
			{
				vInt.push_back(0 + carry);
			}
			else if (a == 0 && b == 1)
			{
				vInt.push_back(1 + carry);
			}
			else if (a == 1 && b == 0)
			{
				vInt.push_back(0 + carry);
			}
			else if (a == 1 && b == 1)
			{				
					carry = 1;
					vInt.push_back(0);
			}
		}
	}
}
