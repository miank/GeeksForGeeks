// CountTheCharacters.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
		cin >> str;
		int n;
		cin >> n;

		int countAlpha[26] = { 0 };
		
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == str[i - 1])
				continue;
			else
			countAlpha[str[i] - 'a']++;
		}

		int count = 0;
		for (int i = 0; i < 26; i++)
		{
			if (countAlpha[i] == n)
			{
				count++;
			}
		}
		cout << count << endl;
		str.empty();
	}
	return 0;
}
