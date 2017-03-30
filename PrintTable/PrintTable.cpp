// PrintTable.cpp : GeeksForGeeks
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n(0), t(0);
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int i = 1; i <= 10; i++)
		{
			cout << i * n << " ";
		}
		cout << endl;
	}


    return 0;
}

