// RemoveCharactersFromAlphanumericString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t(0);
	cin >> t;
	string str;
	while (t--)
	{
		cin >> str;
		int len = str.length();
		for (int i = 0; i < len; i++)
		{
			if (isdigit(str[i]))
			{
				cout << str[i];
			}
		}
		cout << endl;
	}
}

