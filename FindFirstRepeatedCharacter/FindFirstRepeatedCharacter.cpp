// FindFirstRepeatedCharacter.cpp

#include "pch.h"
#include <iostream>
#include <map>
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
		int n = str.length();
		map<char, int> hash;
		int flag = 1;

		for (int i = 0; i < n; i++)
		{
			hash[str[i]]++;

			if (hash[str[i]] > 1)
			{
				cout << str[i] << endl;
				flag = 0;
				break;
			}
		}

		if (flag == 1)
		{
			cout << "-1" << endl;
		}
	}
	return 0;
}