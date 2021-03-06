// PrimeString.cpp 

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int IsPrime(int sum)
{
	if (sum < 2)
		return 0;
	int flag(1);
	for (int i = 2; i <= sum / 2; i++)
	{
		if (sum % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag)
		return 1;
	else
		return 0;
}

int main()
{
	int t(0), n(0);
	cin >> t;
	string str;
	while (t--)
	{
		cin >> n;		
		cin >> str;
		int sum(0);	 
		for (int i = 0; i < str.size(); i++)
		{
			sum = sum + str[i];
		}

		int result = IsPrime(sum);
		if (result)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}

