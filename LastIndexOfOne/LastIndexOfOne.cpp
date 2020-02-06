// LastIndexOfOne.cpp 

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

		bool flag = false;

		for (int i = str.size() - 1; i >= 0; i--)
		{
			if (str[i] == '1')
			{
				cout << i << endl;
				flag = true;
				break;
			}
		}
		if (flag == false)
		{
			cout << -1 << endl;
		}
	}
	return 0;
}