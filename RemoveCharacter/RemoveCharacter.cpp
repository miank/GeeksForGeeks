// RemoveCharacter.cpp 

#include "stdafx.h"
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
	int test(0);
	cin >> test;

	while (test--)
	{
		string str1, str2;
		cin >> str1 >> str2;

		set<char> set1;
		for (int i = 0; i < str2.length(); i++)
		{
			set1.insert(str2[i]);
		}

		for (int i = 0; i < str1.length(); i++)
		{
			if (set1.find(str1[i]) == set1.end())
			{
				cout << str1[i];
			}
		}
		cout << endl;
	}
	return 0;
}
