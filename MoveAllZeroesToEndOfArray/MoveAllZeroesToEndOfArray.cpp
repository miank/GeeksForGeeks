// MoveAllZeroesToEndOfArray.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> vInt1;
	vector<int> vInt2;
	int ele(0), n(0), t(0);
	cin >> t;

	while (t--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			if (ele > 0)
			{
				vInt1.push_back(ele);
			}
			else
			{
				if (ele == 0)
				{
					vInt2.push_back(ele);
				}
			}
		}
		for (int i = 0; i < vInt1.size(); i++)
		{
			cout << vInt1[i] << " ";
		}
		for (int i = 0; i < vInt2.size(); i++)
		{
			cout << vInt2[i] << " ";
		}
		vInt1.clear();
		vInt2.clear();

		cout << endl;
	}

    return 0;
}

