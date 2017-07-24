// StudentRecord.cpp

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int mark1(0), mark2(0), mark3(0), n(0), t(0), temp(0), count(0);
	string name;

	cin >> t;
	while (t > 0)
	{
		cin >> n;
		count = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> name >> mark1 >> mark2 >> mark3;
			int avg = (mark1 + mark2 + mark3) / 3;
			
			if (count == 0) 
			{
				temp = avg;
				count++;
			}

			if (temp < avg)
				cout << name << " " << avg << endl;
		}
		t--;
	}

    return 0;
}

