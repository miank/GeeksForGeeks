// VowelOrNot.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0);
	char ch[100];
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> ch;
		if (ch == "a")
			cout << "YES";
		else if (ch == "e")
			cout << "YES";
		else if (ch == "i")
			cout << "YES";
		else if (ch == "o")
			cout << "YES";
		else if (ch == "u")
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
    return 0;
}

