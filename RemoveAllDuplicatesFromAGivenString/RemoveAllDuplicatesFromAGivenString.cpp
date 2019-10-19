// RemoveAllDuplicatesFromAGivenString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
	int t(0);
	cin >> t;

	while (t--)
	{
		string str;
		cin >> str;

		set<char> s1;
		for (int i = 0; i < str.length(); i++)
		{
			s1.insert(str[i]);
		}
		for (int i = 0; i < str.size(); i++)
		{
			if (s1.find(str[i]) != s1.end())
			{
				cout << str[i];
				s1.erase(str[i]);
			}
		}
		cout << endl;
	}
}

