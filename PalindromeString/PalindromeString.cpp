// PalindromeString.cpp 

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Solution 
{
public:
	int isPlaindrome(string S)
	{
		// Your code goes here
		int j = S.size() - 1;
		for (int i = 0; i < S.size() / 2; i++)
		{
			if (S[i] != S[j])
			{
				return 0;
			}
			j--;
		}
		return 1;
	}

};

int main()
{
	Solution obj;
	string str;

	cin >> str;
	cout << obj.isPlaindrome(str) << endl;
	return 0;
}
