// C++Strings.cpp 

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t(0);
	cin >> t;
	while (t > 0)
	{
		string str1, str2;
		cin >> str1 >> str2;

		int strlen1 = str1.length();
		int strlen2 = str2.length();

		int size = (strlen1 > strlen2) ? strlen1 : strlen2;
		cout << size << endl;
		cout << str1 + str2 << endl;
		t--;
	}
    return 0;
}

