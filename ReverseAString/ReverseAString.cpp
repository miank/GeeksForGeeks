// ReverseAString.cpp 

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
		int size = str.size();

		for (int i = 0; i < size/2; i++)
		{
			char ch = str[i];
			str[i] = str[size - i - 1];
			str[size - i - 1] = ch;
		}
		cout << str << endl;
	}
	return 0;
}

