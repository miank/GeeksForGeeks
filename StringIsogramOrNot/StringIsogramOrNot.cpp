// StringIsogramOrNot.cpp 

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

bool isIsogram(string s);
int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		string s;
		cin >> s;

		cout << isIsogram(s) << endl;

	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
//Complete this function
bool isIsogram(string s)
{
	//Your code here
	int hash[26] = { 0 };

	// iterating through the characters
	for (int i = 0; i < s.length(); i++)
	{
		// increment the count of character in hash
		hash[s[i] - 'a']++;

		// if count of any character is greater than 1,
		// then string is not isogram, return false
		if (hash[s[i] - 'a'] > 1)
		{
			return false;
		}
	}
	return true;
}

