// AddTwoFractions.cpp 

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0);
	cin >> t;
	int num1(0), den1(0), num2(0), den2(0);
	
	while (t--)
	{
		cin >> num1 >> den1 >> num2 >> den2;
		int result = ((num1 * den2) + (num2 * den1)) / (den1 * den2);
		cout << result << endl;
	}	
}