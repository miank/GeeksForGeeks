// CountNumberOfWords.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t(0);
	cin >> t;

	while (t--)
	{
		string str;
		getline(cin >> ws, str);
		int count(0);

		for (int i = 0; i < str.length (); i++)
		{
			if (str[i] == '\\' || str[i] == ' ')
			{
				count++;
				i++;
			}
		}
		cout << count << endl;
	}
}
