#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		getline(cin, str);
		while (str.length() == 0)
		{
			getline(cin, str);
		}
		int len = str.length();
		bool flag = true;
		for (int i = 0; i < len; i++) 
		{
			char ch = str[i];
			if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'u' || ch == 'o' || ch == ' ' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
			{
				cout << ch;
				flag = false;
			}

		}
		if (flag == true)
		{
			cout << "No Vowel" << endl;
		}
		else
		{
			cout << endl;
		}
	}
	return 0;
}