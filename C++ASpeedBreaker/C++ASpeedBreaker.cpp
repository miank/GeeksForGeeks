// C++ASpeedBreaker.cpp 
#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int t(0);
	cin >> t;


	while (t--)
	{
		float num1;
		int precision;
		cin >> num1;
		cin >> precision;

		cout << setprecision(precision) << fixed - 1 << num1 << endl;
	}
}