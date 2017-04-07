// SwapTwoNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void swapNumbers(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << a << " "<< b;
	cout << endl;
}

int main()
{
	int t(0), num1(0), num2(0);

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> num1;
		cin >> num2;

		swapNumbers(num1, num2);
	}
    return 0;
}

