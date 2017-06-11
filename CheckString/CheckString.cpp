// CheckString.cpp 

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t(0);
	string str;
	cin >> t;
	
	while (t > 0)
	{
		cin >> str;

		if (str.length() == 1)
		{
			cout << "YES" << endl;
			break;
		}
		cout << endl;

		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == str[i + 1])
			{
				cout << "YES" << endl;
				break;
			}
			else
			{
				cout << "NO" << endl;
				break;
			}
		}
		t--;
	}
    return 0;
}

