// MergeTwoStrings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int test(0);
	cin >> test;
	string str1, str2;

	while (test)
	{
		cin >> str1 >> str2;
		int len1 = str1.length();
		int len2 = str2.length();
		int len = len1 > len2 ? len1 : len2;
		for (int i = 0; i < len; i++)
		{
			if (i < str1.length())
			{
				cout << str1[i];
			}
			if (i < str2.length())
			{
				cout << str2[i];
			}
		}
		test--;
		cout << endl;
	}
	return 0;
}
